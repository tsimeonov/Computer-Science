/*

- Copy your game project code into this file
- for the p5.Sound library look here https://p5js.org/reference/#/libraries/p5.sound
- for finding cool sounds perhaps look here
https://freesound.org/


*/

var jumpSound;
var isInitialised;

function preload() {
  soundFormats("mp3", "wav");

  //load your sounds here
  jumpSound = loadSound("assets/segway_loop.mp3", function () {
    console.log("Sound is loaded");
  });
  jumpSound.setVolume(0.1);
}

function setup() {
  createCanvas(1024, 576);
  textAlign(ENTER);
}

function draw() {
  background(0);
  fill(255);

  if (!isInitialised) {
    text("Press any key to begin", width / 2, height / 2);
  }
}

function keyPressed() {
  if (!isInitialised) {
    isInitialised = true;
    jumpSound.setVolume(0.2);
    //jumpSound.play();
    // Use the r variable to adjust the sound speed
    var r = map(mouseX, 0, width, 0.4, 4);
    jumpSound.loop(0, r);
  } else {
    // Use the space bar to pause the sound
    if (key == " ") {
      if (jumpSound.isPaused()) {
        jumpSound.play();
      }
      jumpSound.pause();
    }
  }
}
