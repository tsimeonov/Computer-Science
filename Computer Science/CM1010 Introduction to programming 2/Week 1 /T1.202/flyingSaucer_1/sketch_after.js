//Topic 1.1
//Object orientation revisted
//part one

// Step 1: Create the two varialbes
// let flying_saucer_x;
// let flying_saucer_y;

// Step 5: Create the width variable
// let flying_sacer_width;

// Step 8: Create a variable for the height
// let flying_sacer_height;

// Step 11: Create an object
let flying_saucer;

function setup() {
  createCanvas(800, 600);
  noStroke();

  // Step 2: Initialize the variables
  // flying_saucer_x = 200;
  // flying_saucer_y = 100;

  // Step 6: Initialize the width variable
  // flying_sacer_width = 200;

  // Step 9: Initialize the height variable
  // flying_sacer_height = 50;

  // Step 12: Initialize the object

  flying_saucer = new Flying_saucer();
}

function draw() {
  background(50, 0, 80);

  //draw the ground
  fill(0, 50, 0);
  rect(0, height - 100, width, 100);

  // Step 3: Replace the hard coded values with the variables

  // Step 7: Replace the hard coded values (width) with the variable

  // Step 10: Replace the hard coded values (height) with the variable

  if (flying_saucer.beam_on == true) {
    flying_saucer.beam();
  }
}

function keyPressed() {
  flying_saucer.beam_on = true;
}

function keyReleased() {
  flying_saucer.beam_on = false;
}

function Flying_saucer() {
  this.x = 400;
  this.y = 150;
  this.width = 200;
  this.height;
  75;
  this.num_lights;
  20;
  this.brightness;
  [];

  this.hover = function () {
    // console.log("Hover");

    // Step 4: Make the saucer hover

    this.x += random(-1, 1);
    this.y += random(-1, 1);
  };

  this.beam = function () {
    fill(255, 255, 100, 160);

    if (random() > 0.001) {
      beginShape();
      vertex(this.x - this.width * 0.25, this.y);
      vertex(this.x + this.width * 0.25, this.y);
      vertex(this.x + this.width, height - 100);
      vertex(this.x - this.width, height - 100);
      endShape(close);
    }
  };

  this.beam_on = false;

  this.draw = function () {
    //draw the flying saucer
    fill(175, 238, 238);
    arc(this.x, this.y, this.width / 2, this.height * 2, PI, TWO_PI);
    fill(150);
    arc(this.x, this.y, this.width, this.height, PI, TWO_PI);
    fill(50);
    arc(this.x, this.y, this.width, this.height / 2, 0, PI);

    this.hover();

    // Step 8: Add lights
    fill(255);

    let increment = this.width / (this.num_lights - 1);

    for (let i = 0; i < this.num_lights; i++) {
      fill(this.brightness[i]);
      ellipse(this.x - this.width / 2 + increment * i, this.y, 5);

      this.brightness[i] += 3;
      this.brightness[i] = this.brightness[i] % 255;
    }
  };

  for (let i = 0; i < this.num_lights; i++) {
    this.brightness.push((i * 20) % 255);
  }
}
