let a = 9;
let b = 4;

console.log(a, b);

let c = b; //swap using third variable
b = a;
a = c;

console.log(a, b);

a = a + b; // arithmetic operations
b = a - b;
a = a - b;

console.log(a, b);
