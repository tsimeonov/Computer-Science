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

  for (let i = 0; i < flying_saucer.num_lights; i++) {
    flying_saucer.brightness.push((i * 20) % 255);
  }
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

  //draw the flying saucer
  fill(175, 238, 238);
  arc(
    flying_saucer.x,
    flying_saucer.y,
    flying_saucer.width / 2,
    flying_saucer.height * 2,
    PI,
    TWO_PI
  );
  fill(150);
  arc(
    flying_saucer.x,
    flying_saucer.y,
    flying_saucer.width,
    flying_saucer.height,
    PI,
    TWO_PI
  );
  fill(50);
  arc(
    flying_saucer.x,
    flying_saucer.y,
    flying_saucer.width,
    flying_saucer.height / 2,
    0,
    PI
  );

  flying_saucer.hover();

  // Step 8: Add lights
  fill(255);

  let increment = flying_saucer.width / (flying_saucer.num_lights - 1);

  for (let i = 0; i < flying_saucer.num_lights; i++) {
    fill(flying_saucer.brightness[i]);
    ellipse(
      flying_saucer.x - flying_saucer.width / 2 + increment * i,
      flying_saucer.y,
      5
    );

    flying_saucer.brightness[i] += 3;
    flying_saucer.brightness[i] = flying_saucer.brightness[i] % 255;
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
}
