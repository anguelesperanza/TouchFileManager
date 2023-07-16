package ;

import haxe.ui.containers.VBox;
import haxe.ui.events.MouseEvent;
import haxe.ui.components.Button;
import haxe.ui.core.Component;

import haxe.Timer;

import sys.FileSystem;

import openfl.events.MouseEvent;


import hx.files.*;

// Application is called Touch File Manager


@:build(haxe.ui.ComponentBuilder.build("assets/main-view.xml"))
class MainView extends VBox {
    var home:String = "";
    var cwd:String = "";
    var p:Path;
    var itemSelected:Bool = false;
    var held:Bool = false;
    var selectedFilePath = "";
    var selectedName = "";
    
    public function new() {
        super();
        
        // Sets the home directory based on OS.
        if (Sys.systemName() == "Windows"){
            home = "C:/";
        }
        else{ 
            home = "/";
        }      
        // I don't think I need this anymore. Legacy from file navigation rewrite. 
        cwd = home;

        // This is the label at the top of the application when running.
        // Supposed to show file path, haven't rewrote that yet -- Not a priority at the moment. 
        pathViewer.text = cwd;

        // Converts the home directory to a Path class (haxelib haxe-file Path and not built-in Haxe Path)
        p = Path.of(home);
        
        // Shows the home directory
        showDirectory(p, directoryDisplay);

        // These are the button click methods for when the user holds down the button.
        // Or at least the default ones. In theory, these will show up in a drawer once the button is held.
        // Haven't actually programmed that yet. Not even sure I know how to get that to work. 
        // For now, the buttons sit at the top of the window. Not very friendly though, so need to get drawer working. 
        backDir.onClick = function(e){
            goBackDirectory(p, directoryDisplay);
        }

        // This is for the when the copy button is clicked.
        // Too tired to give a good description.
        // cchecks if the selected file -- see the MOUSE_DOWN function -- or file
        // Copies to location.
        copy.onClick = function(e){

        trace("------------------------------------------------------------------------------------");
            if (itemSelected == true){

                try{
                trace("This is a file");
                var temp = Path.of(selectedFilePath);
                var tempFileName = temp.filename;
                var file = Path.of(temp.getAbsolutePath()).toFile();
                file.copyTo(p.join(tempFileName));

                showDirectory(p, directoryDisplay);

                }
                catch(e){
                    trace(e.message);
                }


            }

            if(!itemSelected){
                trace("This is a directory");

                // var tempDir = Dir.of(selected);
                // tempDir.setCWD();
                // trace(tempDir.listFiles());
                // tempDir.copyTo("C:\\Users\\King-\\Desktop\\Me\\CopyLocal");
                var temp = Path.of(selectedFilePath).toDir();
                // trace("Directory to copy: " + tempDir);
                // trace("Directory to paste to: C:\\Users\\King-\\Documents\\Test");
                var tempPath = p.join(selectedName);
                // trace(tempPath.getAbsolutePath());
                temp.copyTo(tempPath);

                // tempDir.copyTo("C:\\Users\\King-\\Documents\\Test\\");
                showDirectory(p, directoryDisplay);
            }

        }
        // run.onClick = function(e){runFile();} // Done
    }
    
    // showDirectory will take the file path and the container to show the directory in.
    // Then it will display the contents of the folder to that container. 
    private function showDirectory(path:Path, container:Component){
        // Clear the selected container of any items already in it. 
        container.removeAllComponents();
        // Get a list (well array technically) of ever folder and file in the path
        var scans = scanDirectory(path.getAbsolutePath());

        // Creates a timer to see if the folder/file is being held or clicked.
        // Sets time to 1 second (1000 ms)
        var timer:Timer = new Timer(2000);

        // Adds a button that will represent a folder/file in the path. Every file/folder is converted into a button.
        for (s in scans){
            var button = new Button();
            button.width = 100;
            button.height = 100;
            button.text = s;
            // button.icon = "haxeui-core/styles/default/haxeui_small.png";
            button.icon = "C:/Users/King-/Documents/Haxe Projects/FileManager/assets/images/folder.png";

            // Checks if the left mouse click/touch is held
            // This was not added in button.OnClick as the file navigation failed when I tried.
            // To tired to figure out why -- will just leave as is for the time being
            // This checks runs if the button is held for 1 second
            button.addEventListener(MouseEvent.MOUSE_DOWN, function(e){
                held = false;
                if (!held){
                    timer.run = function(){ 
                        trace("held is true");
                        held = true;
                        p = path.join(button.text);
                        selectedFilePath = p.getAbsolutePath();
                        if (p.isFile()){
                            itemSelected = true;
                            trace("the selected file path is: " + selectedFilePath);

                        } 
                        if (p.isDirectory()){
                            selectedName = button.text;
                            itemSelected = false;
                            trace("the selected file path is: " + selectedFilePath);

                        }
                        // trace(itemSelected);
                    }
                }
            });

            // Stops the timer. If I don't do it this way, then the file navigation fails.
            // To tired to find add into button.onClick; no noticable performance issues at this time. 
            button.addEventListener(MouseEvent.MOUSE_UP, function(e){
                timer.stop();
                return;
            });

            // Assuming that the user isn't holding the button down, navigate the file path
            // Slight pause before opening up larger directories. May need to find optimizaiton? It's loading a lot of buttons so pause is understandable.
            // Pause is also a split second, and the program doesn't seem to crash or freeze either. Overthinking it? Maybe.
            // Perhaps clearing memory before deleting buttons? -- Will investigate should performance become a huge issue.
            // Functionality comes first. 
            button.onClick = function (e) {
                if (held){return;}
                trace(button.text + " has been clicked");
                if (path.join(button.text).isDirectory()){
                    trace(path.join(button.text) + " Is a valid path");
                    path = path.join(button.text);
                    p = Path.of(path.getAbsolutePath());
                    trace("Current P file path: " + p.getAbsolutePath());
                    showDirectory(path, container);
                }
                // If a file is clicked, and not a folder, launch the file.
                // Well specifically, call the runFile method. That launches the actual file. 
                else {
                    runFile(path.join(button.text).getAbsolutePath());
                }
             

            }
            container.addComponent(button);
        }
    }

    // This just scans the directory.
    // This could be in the onClick method above, but it's legacy from before the file navigation rewrite
    // Grandfathere'd in if you well. I think it's funny so I'mma keep it. No noticable performance decrease.
    private function scanDirectory(cwd:String){
        var results = FileSystem.readDirectory(cwd);
        return results;
    }

    // This lets the user go back a directory so long as the value isn't null.
    // If the path is already the root (path == C:\ or / ) the value of path.parent is null. 
    private function goBackDirectory(path:Path, container:Component){
        if(path.parent != null){
            trace(path);
            var temp = Path.of(path.parent.getAbsolutePath());
            p = Path.of(temp.getAbsolutePath());
            showDirectory(temp, container);
        }
    }
    
    // The actual function that runs applications/files and such.
    // Sys.systemName will get the 'name' of the OS (Windows, Linux, Mac, etc)
    // If using windows, use the 'start' command | If using Linux, use the 'xdg-open' command
    // This uses the default CMD/terminals for the OS.
    // For windows, the start takes to options, the name of the widown, and the path.
    // Path has spaces; for windows, doing it this was what worked. 
    private function runFile(path:String){
        switch(Sys.systemName()){
            // If windows use the start command to open the selected file
            case "Windows": {Sys.command("start", ["", path]);}
            case "Linux": {Sys.command("xdg-open", [path]);}
        }   
    }
}