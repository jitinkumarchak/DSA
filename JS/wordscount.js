function wordscount(sentence) {
    const words = sentence.split(" ");
    const filterwords = words.filter((words) => words !== "");
    return filterwords.length;
}

console.log(wordscount("myself is jitin  kumar  chak"));
