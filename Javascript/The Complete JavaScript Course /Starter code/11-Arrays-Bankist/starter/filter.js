const movements = [200, 450, -400, 3000, -650, -130, 70, 1300];
console.log(movements);

const deposits = movements.filter(function (mov) {
  return mov > 0;
});

console.log(deposits);

const depositsFor = [];
for (const mov of movements) {
  if (mov > 0) {
    depositsFor.push(mov);
  }
}

console.log(depositsFor);

const withdrawal = movements.filter(function (mov) {
  return mov < 0;
});

console.log(withdrawal);
