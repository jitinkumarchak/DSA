//  function isLeapYear(year){
//     if(year % 4 === 0){
//         return true;
//     }
//     else{
//         return false;
//     }
//  }

//  console.log(isLeapYear(2024));

const arr = [1,3,5,7,8];

function double(x){
    return  x * 2;
}

const newarr = arr.map(double);
console.log(newarr);


const newarr2 =arr.filter( x => x>5)
console.log(newarr2);

const newarr3 = arr.reduce()


