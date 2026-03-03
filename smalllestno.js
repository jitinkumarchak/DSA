// function smallestnum(a, b, c) {
//   if (a <= b && a <= c) {
//     return a;
//   } else if (b <= a && b <= c) {
//     return b;
//   } else if (c <= a && c <= b) {
//     return c;
//   }
//   return a;
// }

// console.log(smallestnum(7, 4, 6));


function smallestarrelement(arr){
    if (arr.length === 0) {
        return "arr is empty";
    }
    else if (arr.length === 1){
        return arr[0];
    }
    else{
        let smallest = arr[0];
        for(let i=1; i<arr.length; i++){
            if(arr[i] < smallest){
                smallest = arr[i];
            }
        }
        return smallest;
    }
}

console.log(smallestarrelement([7, 4, 6]));