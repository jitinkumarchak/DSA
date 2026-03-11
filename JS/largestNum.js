function largetnum(arr){
    let largest = arr[0];
    for(let i =0; i<=arr.length; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

console.log(largetnum([133,12,4,10]));