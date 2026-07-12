// good-order-processor.js
// POSITIVE COUPLING: Modules interact via clean methods without
// knowing each other's internal structures.

class OrderProcessor {
	processOrder(user, itemAmount) {
		// GOOD: Relying on a public method. The OrderProcessor doesn't
		// need to know HOW the user charges the card, only that it can.
		const paymentSuccessful = user.chargePayment(itemAmount);

		if (paymentSuccessful) {
			console.log('Order processed successfully.');
		} else {
			console.log('Payment failed.');
		}
	}
}
