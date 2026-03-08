// function sumofDigits(number) {
//   const inputnum = number.toString();
//   const splittednum = inputnum.split("");
//   let sum = 0;
//   splittednum.forEach((num) => {
//     sum = sum + parseInt(num);
//   });
//   return sum;
// }

// console.log(sumofDigits(1234));

function sumofDigits(number) {
  let num = 0;
  num = number % 10;
  number = Math.floor(number / 10);
  return num + sumofDigits(number);
 }
 console.log(sumofDigits(1234));
