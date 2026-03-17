function countvowels$consonants(str) {
  let vowelscount = 0;
  let consonentscount = 0;
  let vowels = ("aeiou");
  let consonants = ("bcdfghjklmnpqrstvwxyz");
  

  for (let i = 0; i < str.length; i++) {
    if (vowels.includes(str[i])) {
      vowelscount++;
    } else if (consonants.includes(str[i])) {
      consonentscount++;
    }
  }

  return { vowelscount, consonentscount };
}

console.log(countvowels$consonants("aeiou"));
