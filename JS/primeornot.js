function primeorNOt(num) {
  let isprime = true;
  if (num == 1 && num % 2 === 0) {
    isprime = false;
  }
  return isprime;
}

console.log(primeorNOt(1));
