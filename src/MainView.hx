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
    var itemClicked = "";
    var held:Bool = false;
    
    public function new() {
        super();
        
        if (Sys.systemName() == "Windows"){
            home = "C:/";
        }
        else{ 
            home = "/";
        }      
        cwd = home;
        pathViewer.text = cwd;

        p = Path.of(home);
        
        showDirectory(p, directoryDisplay);

        backDir.onClick = function(e){goBackDirectory(p, directoryDisplay);}
        copy.onClick = function(e){trace("copy button clicked");}
        paste.onClick = function(e){trace("paste button clicked");}
        move.onClick = function(e){trace("move button clicked");}
        // run.onClick = function(e){runFile();} // Done
    }
    
    // showDirectory will take the file path and the container to show the directory in.
    // Then it will display the contents of the folder to that container. 
    private function showDirectory(path:Path, container:Component){
        // Clear the selected container of any items already in it. 
        container.removeAllComponents();
        // See if there is anything in the path. No need to clear if the path is already empty. 
        var scans = scanDirectory(path.getAbsolutePath());

        // Creates a timer to see if the folder/file is being held of clicked.
        var timer:Timer = new Timer(1000);

        // Adds a button that will represent a folder/file in the path
        for (s in scans){
            var button = new Button();
            button.width = 100;
            button.height = 100;
            button.text = s;

            // Checks if the left mouse click/touch is held
            // This was not added in button.OnClick as the file navigation failed when I tried.
            // To tired to figure out why -- will just leave as is for the time being
            button.addEventListener(MouseEvent.MOUSE_DOWN, function(e){
                held = false;
                if (!held){
                    timer.run = function(){ 
                        trace("held is true");
                        held = true;
                    }
                }
            });

            // Stops the timer. If I don't do it this way, then the file navigation fails.
            // To tired to find add into button.onClick; no noticable performance issues at this time. 
            button.addEventListener(MouseEvent.MOUSE_UP, function(e){
                timer.stop();
            });

            // Assuming that the user isn't holding the button down, navigate the file path
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
                // Well specifically, call the runFile method. That launched the actual file. 
                else {
                    // trace(path.join(button.text).getAbsolutePath());
                    runFile(path.join(button.text).getAbsolutePath());
                }
             

            }
            container.addComponent(button);
        }
    }

    private function scanDirectory(cwd:String){
        var results = FileSystem.readDirectory(cwd);
        return results;
    }

    private function goBackDirectory(path:Path, container:Component){
        if(path.parent != null){
            trace(path);
            var temp = Path.of(path.parent.getAbsolutePath());
            p = Path.of(temp.getAbsolutePath());
            showDirectory(temp, container);
        }
    }
    
    // The actual function that runs applications/files and such. 
    private function runFile(path:String){
        // Sys.command("start", ["C:/Users/King-/Documents/Itch.io Downloads/PDF/a-history-of-moments v1.pdf"]);
        switch(Sys.systemName()){
            // If windows use the start command to open the selected file
            case "Windows": {Sys.command("start", ["", path]);}
            case "Linux": {Sys.command("xdg-open", [path]);}
        }   
    }
}