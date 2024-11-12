// Define the LineToTool function, which creates a tool for drawing straight lines on the canvas.
function LineToTool() {
  // Specify the icon image and name for the tool.
  this.icon = "assets/lineTo.jpg";
  this.name = "LineTo";

  // Variables to store the starting mouse position for the line.
  var startMouseX = -1;
  var startMouseY = -1;

  // A boolean variable to check if the user is currently drawing a line.
  var drawing = false;

  // Define the draw method, which is called repeatedly to render content on the canvas.
  this.draw = function () {
    // Check if the mouse is pressed.
    if (mouseIsPressed) {
      // If this is the first time pressing the mouse, capture the starting position.
      if (startMouseX == -1) {
        startMouseX = mouseX;
        startMouseY = mouseY;
        // Set drawing to true since we have started drawing a line.
        drawing = true;
        // Save the current canvas pixels, allowing us to restore them during the next update.
        loadPixels();
      } else {
        // Restore the previously saved canvas pixels to erase the previous line preview.
        updatePixels();
        // Draw a line from the starting point to the current mouse position.
        line(startMouseX, startMouseY, mouseX, mouseY);
      }
    }

    // If the mouse is released and a line was being drawn,
    else if (drawing) {
      // End the drawing mode by resetting drawing to false.
      drawing = false;
      // Reset the starting positions so a new line can be drawn on the next click.
      startMouseX = -1;
      startMouseY = -1;
    }
  };
}
