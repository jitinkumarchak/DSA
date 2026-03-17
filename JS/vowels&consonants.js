function vowelscount(str){
    let count =0;
    let arr = ["a","e","i","o","u"];

    for(let i = 0; i<str.length;i++){
        for(let j =0;j<arr.length;j++){
            if(str[i] === arr[j]){
                count++;
            }
        }
    }
    return count;
}

console.log(vowelscount("hello"));