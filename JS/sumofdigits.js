function sumofDigits(number) {
  const inputnum = number.toString();
  const splittednum = inputnum.split("");
  let sum = 0;
  splittednum.forEach((num) => {
    sum = sum + parseInt(num);
  });
  return sum;
}

console.log(sumofDigits(1234));
