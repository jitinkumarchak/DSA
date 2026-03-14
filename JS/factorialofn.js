// function factorailofN(n) {
//   if (n < 0) {
//     throw new Error("n should be a -ve int");
//   }
//   let factorial = 1;
//   for (let i = 1; i <= n; i++) {
//     factorial *= i;
//   }
//   return factorial;
// }

// console.log(factorailofN(5));

function factorialofN(n) {
  let fact = 1;
  for (let i = 1; i <= n; i++) {
    fact = fact * i;
  }
  return fact;
}

console.log(factorialofN(5));