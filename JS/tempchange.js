function farenheitcalculator(celcius){
    const farenheit  = (celcius * 9/5) + 32;
    return farenheit;
}

function celciuscalculator(farenheit){
    const celcius  = (farenheit - 32) * 5/9;
    return celcius;
}

console.log(farenheitcalculator(21));
console.log(celciuscalculator(70));