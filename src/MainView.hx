package ;

import haxe.ui.containers.VBox;
import haxe.ui.events.MouseEvent;
import haxe.ui.components.Button;
import haxe.ui.core.Component;


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
        // // copy.onClick = function(e){trace("copy button clicked");}
        // // paste.onClick = function(e){trace("paste button clicked");}
        // // move.onClick = function(e){trace("move button clicked");}
        // run.onClick = function(e){runFile();} // Done
    }
    
    // showDirectory will take the file path and the container to show the directory in.
    // Then it will display the contents of the folder to that container. 
    private function showDirectory(path:Path, container:Component){
        // Clear the selected container of any items already in it. 
        container.removeAllComponents();
        // See if there is anything in the path. No need to clear if the path is already empty. 
        var scans = scanDirectory(path.getAbsolutePath());
        for (s in scans){
            var button = new Button();
            button.width = 100;
            button.height = 100;
            button.text = s;
            button.addEventListener(MouseEvent.MOUSE_DOWN, function(e){trace(button.text + " Is held down");});
            button.onClick = function (e) {
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