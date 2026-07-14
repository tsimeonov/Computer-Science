// bad-order-processor.js
// NEGATIVE COUPLING: This module directly manipulates the internal
// properties of the User object, breaking encapsulation.

class OrderProcessor {
	processOrder(user, itemAmount) {
		// BAD: Directly reaching into deep nested properties of another module
		if (user.profile.paymentMethod.creditCard.balance >= itemAmount) {
			user.profile.paymentMethod.creditCard.balance -= itemAmount;
			console.log('Order processed successfully.');
		} else {
			console.log('Insufficient funds.');
		}
	}
}
