function AvgofN(arr) {
  let sum = 0;
  let avg = 0;
  for (let i = 0; i < arr.length; i++) {
    sum = sum + arr[i];
    
  }
  avg = sum / arr.length;
  console.log(sum);
  return avg;
}

console.log(AvgofN([1,2,99,4,5]));
