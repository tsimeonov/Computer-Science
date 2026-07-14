// TaxCalculator.js
// POSITIVE COHESION: This module is strictly focused on financial tax calculations.

class TaxCalculator {
	calculateStandardTax(amount) {
		return amount * 1.2;
	}

	calculateReducedTax(amount) {
		return amount * 1.05;
	}

	applyExemption(amount) {
		return amount; // 0% tax
	}
}

module.exports = TaxCalculator;
