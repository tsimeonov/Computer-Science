// function Spectrum(){
// 	this.name = "spectrum";
function Spectrum() {
  this.name = "spectrum";

  this.draw = function () {
    push();
    var spectrum = fourier.analyze();
    noStroke();

    // Draw horizontal bars
    for (var i = 0; i < spectrum.length; i++) {
      var y = map(i, 0, spectrum.length, 0, height); // Map each bar vertically
      var w = map(spectrum[i], 0, 255, 0, width); // Width based on amplitude

      // Calculate color gradient (green to red)
      var colorValue = map(spectrum[i], 0, 255, 0, 1); // Map amplitude to a 0-1 range
      var r = colorValue * 255; // Red increases with amplitude
      var g = (1 - colorValue) * 255; // Green decreases with amplitude
      fill(r, g, 0); // Set fill color

      rect(0, y, w, height / spectrum.length); // Draw the rectangle
    }

    pop();
  };
}
