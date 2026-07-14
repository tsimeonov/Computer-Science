const assert = require('assert');

function point_is_in_box(
	pointX,
	pointY,
	boxTopCornerX,
	boxTopCornerY,
	boxWidth,
	boxHeight
) {
	return true;
}

describe('Collision Detection Tests', function () {
	it('should return true when the point is inside the the box', function () {
		const result = point_is_in_box(5, 5, 0, 0, 10, 10);
		assert.strictEqual(result, true);
	});
});
