//Constructor function to handle the onscreen menu, keyboard and mouse
//controls
function ControlsAndInput() {
  this.menuDisplayed = false;

  //playback button displayed in the top left of the screen
  this.playbackButton = new PlaybackButton();

  //make the window fullscreen or revert to windowed
  this.mousePressed = function () {
    //???
    //check if the playback button has been clicked
    if (this.playbackButton.hitCheck()) {
      // The hitCheck function already handles toggling playback
      // And the button's play/pause state, so no further action is needed.
      return;
    } else {
      //if not make the visualisation fullscreen
      let fs = fullscreen();
      fullscreen(!fs);
    }
  };

  //responds to keyboard presses
  //@param keycode the ascii code of the keypressed
  this.keyPressed = function (keycode) {
    console.log(keycode);
    if (keycode == 32) {
      this.menuDisplayed = !this.menuDisplayed;
    }

    if (keycode > 48 && keycode < 58) {
      var visNumber = keycode - 49;
      vis.selectVisual(vis.visuals[visNumber].name);
    }
  };

  //draws the playback button and potentially the menu
  this.draw = function () {
    push();
    fill("white");
    stroke("black");
    strokeWeight(2);
    textSize(34);

    //playback button
    this.playbackButton.draw();
    //only draw the menu if menu displayed is set to true.
    if (this.menuDisplayed) {
      text("Select a visualisation:", 100, 30);
      this.menu();
    }
    pop();
  };

  this.menu = function () {
    //draw out menu items for each visualisation
    //???
    // Start position for the menu
    let startY = 70; // Vertical starting position for the menu
    let spacing = 30; // Vertical spacing between menu items

    // Iterate over the visuals array in the global vis object
    for (let i = 0; i < vis.visuals.length; i++) {
      let visualName = vis.visuals[i].name; // Get the name of the visualisation

      // Display the menu item with its corresponding number
      text(i + 1 + ": " + visualName, 100, startY + i * spacing);
    }
  };
}
