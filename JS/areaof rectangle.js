function area(length, width) {
    if(length <=0 || width <=0){
        console.log("length and width must be positive numbers");
        return;
    }
    const area = length * width;
    console.log("area is:",area);
}

area(0,10);