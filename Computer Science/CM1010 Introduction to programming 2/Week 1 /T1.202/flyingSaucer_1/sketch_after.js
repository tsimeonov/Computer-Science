//Topic 1.1
//Object orientation revisted
//part one

// Step 1: Create the two varialbes
let flying_saucer_x;
let flying_saucer_y;

// Step 5: Create the wifth variable
let flying_sacer_width;

function setup() {
  createCanvas(800, 600);
  noStroke();

  // Step 2: Initialize the variables
  flying_saucer_x = 200;
  flying_saucer_y = 100;

  // Step 6: Initialize the width variable
  flying_sacer_width = 150;
}

function draw() {
  background(50, 0, 80);

  //draw the ground
  fill(0, 50, 0);
  rect(0, height - 100, width, 100);

  // Step 3: Replace the hard coded values with the variables

  //draw the flying saucer
  fill(175, 238, 238);
  arc(flying_saucer_x, flying_saucer_y, 75, 100, PI, TWO_PI);
  fill(150);
  arc(flying_saucer_x, flying_saucer_y, 150, 50, PI, TWO_PI);
  fill(50);
  arc(flying_saucer_x, flying_saucer_y, 150, 25, 0, PI);

  // Step 4: Make the saucer hover

  flying_saucer_x += random(-1, 1);
  flying_saucer_y += random(-1, 1);
}
