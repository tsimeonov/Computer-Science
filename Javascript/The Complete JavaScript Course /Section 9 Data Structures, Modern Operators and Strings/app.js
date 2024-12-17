"use strict";

// Data needed for a later exercise
const flights =
  "_Delayed_Departure;fao93766109;txl2133758440;11:25+_Arrival;bru0943384722;fao93766109;11:45+_Delayed_Arrival;hel7439299980;fao93766109;12:05+_Departure;fao93766109;lis2323639855;12:30";

// Data needed for first part of the section
const restaurant = {
  name: "Classico Italiano",
  location: "Via Angelo Tavanti 23, Firenze, Italy",
  categories: ["Italian", "Pizzeria", "Vegetarian", "Organic"],
  starterMenu: ["Focaccia", "Bruschetta", "Garlic Bread", "Caprese Salad"],
  mainMenu: ["Pizza", "Pasta", "Risotto"],

  openingHours: {
    thu: {
      open: 12,
      close: 22,
    },
    fri: {
      open: 11,
      close: 23,
    },
    sat: {
      open: 0, // Open 24 hours
      close: 24,
    },
  },

  order: function (starterIndex, mainIndex) {
    return [this.starterMenu[starterIndex], this.mainMenu[mainIndex]];
  },

  orderDelivery: function ({
    startIndex = 1,
    mainIndex = 0,
    time = "20.00",
    address,
  }) {
    console.log(
      `Order received! ${this.starterMenu[starterIndex]} and ${this.mainIndex[mainIndex]} will be delivered to ${address} at ${time}`
    );
  },
};

const arr = [7, 8, 9];
const badNewArr = [1, 2, arr[0], arr[1], arr[2]];
console.log(badNewArr); // [ 1, 2, 7, 8, 9 ]

const newGoodArr = [1, 2, ...arr];
console.log(newGoodArr);

console.log(...newGoodArr);

const newMenu = [...restaurant.mainMenu, "Gnocci"];
console.log(newMenu); // [ 'Pizza', 'Pasta', 'Risotto', 'Gnocci' ]

const mainMenuCopy = [...restaurant.mainMenu];
console.log(mainMenuCopy); // [ 'Pizza', 'Pasta', 'Risotto' ]

const wholeMenu = [...restaurant.starterMenu, ...restaurant.mainMenu];

console.log(wholeMenu); // ['Focaccia','Bruschetta','Garlic Bread','Caprese Salad','Pizza','Pasta','Risotto']

// Iterables: arrays, strings, maps, sets. NOT objects
const str = "Todor";
const letters = [...str, "", "S."];

console.log(letters);
