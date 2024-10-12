// Find the highest / lowest number

let numArray = []

function setup() {
    for (let i = 0; i < 100; i++) {
        numArray.push(round(random(0,1000)))
    }

    // Find the highest value in the array
    // and its index and the smallest

    let highestValue = 0
    let highestIndex = 0

    let smallestValue = null
    let smallestIndex = 0

    for (let i =0; i < numArray.length; i++) {
        if (numArray[i] > highestValue) {
            highestValue = numArray[i]
            highestIndex = i
        }

        if (smallestValue == null || numArray[i] < smallestValue) {
            smallestValue = numArray[i]
            smallestIndex = i
        }
    }

    console.log(`The highest values is ${highestValue} at index ${highestIndex} `);
    console.log(`The smallest values is ${smallestValue} at index ${smallestIndex} `);
}

function draw() {}