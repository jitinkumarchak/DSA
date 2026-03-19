function simpleinterest(p, r, t) {
  let interest = 0;

  interest = (p * r * t) / 100;
  return interest;
}


console.log(simpleinterest(20000,15,5));