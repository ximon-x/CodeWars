export function solution(str: string, ending: string): boolean {
  if (str.length === 0 || str.length < ending.length) return false;

  return str.endsWith(ending);
}

console.log(solution("abcde", "cde"));
console.log(solution("abcde", "abc"));
console.log(solution("abc", ""));
