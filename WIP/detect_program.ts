export const isPangram = (phrase: string): boolean => {
  const alphabets = [..."abcdefghijklmnopqrstuvwxyz"];

  for (let letter of phrase) {
    if (alphabets.includes(letter.toLowerCase())) {
      alphabets.splice(alphabets.indexOf(letter));
    }
  }

  if (alphabets.length !== 0) {
    return false;
  } else return true;
};
