function wordscount(sentence) {
  const words = sentence.split(' ');
  console.log(words);
  const nonemptyelements = words.filter((element) => element != ' ');
  console.log(nonemptyelements);
  return nonemptyelements.length;
}

console.log(wordscount("my name  is Jitin"));
