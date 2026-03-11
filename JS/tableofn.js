//write a program generate the table of an number to a specified range
function multiplicationtable(num, range){
    console.log(num ,range);

    for(let i = 1; i<=range; i++){
        console.log(num + " * " + i + " = " + num*i);
    }
}

multiplicationtable(5,7);