export function twoOldestAges(ages: number[]): number[] {
  if (ages.length == 0) return [];
  let answer: number[] = [];

  ages.sort((a, b) => a - b);

  answer = ages.slice(-2);

  return answer;
}
