export function duplicateEncode(word: string): string {
  let answer = "";

  for (let i = 0; i < word.length; i++) {
    let repeated = false;

    for (let j = 0; j < word.length; j++) {
      if (i !== j && word[i].toLowerCase() === word[j].toLowerCase())
        repeated = true;
    }

    if (repeated) answer += ")";
    else answer += "(";
  }

  return answer;
}
