function largetnum(arr){
    let largest = arr[0];
    for(let i =0; i<=arr.length; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}


function largestnum2(arr){
    maxnum = Math.max(...arr);
    return maxnum;
}

console.log(largestnum2([133,12,4,10]));
console.log(largetnum([1,12,4,10]))

