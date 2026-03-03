function checkifnumisevenorodd1(num){
    if(num%2==0 ){
        return "number is even";
    }
    else{
        return "number is odd";
    }
};

//using ternury operator
function checkifnumisevenorodd2(num){
    return num%2===0 ? "even" : "odd";
}

console.log(checkifnumisevenorodd1(10));

console.log(checkifnumisevenorodd2(7));