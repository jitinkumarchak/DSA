// function revstring(str) {
//   let result = "";
//   if (typeof str !== "string"){
//     throw new Error("input must be an string") ;
//   }
//   for (let i = str.length - 1; i >= 0; i--) {
//     result += str[i];
//   }
//   return result;
// }


function revstring(str){
return str.split('').reverse().join('');
}

console.log(revstring("JITIN"));


