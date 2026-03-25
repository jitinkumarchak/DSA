function isarmstrong(num) {
  const originalNum = num;
  const digits = [];
  while (num > 0) {
    let lastdigit = num % 10;
    num = Math.floor(num / 10);
    digits.push(lastdigit);
  }

  const n = digits.length;
  let sum = 0;
  digits.forEach((d) => {
    sum = sum + Math.pow(d, n);
  });
  if (sum === originalNum) {
    return true;
  } else {
    return false;
  }
}
console.log(" is armstrong num " + isarmstrong(153));
