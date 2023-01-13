#include <cmath>
#include <map>
#include <string>
using namespace std;

string repeater(string s, int times) {
  string result = "";

  for (int i = 0; i < times; i++) {
    result += s;
  }

  return result;
}

string solution(int number) {
  string answer = "";

  map<int, string> romanFigures;
  romanFigures[1000] = "M";
  romanFigures[900] = "CM";
  romanFigures[500] = "D";
  romanFigures[400] = "CD";
  romanFigures[100] = "C";
  romanFigures[90] = "XC";
  romanFigures[50] = "L";
  romanFigures[40] = "XL";
  romanFigures[10] = "X";
  romanFigures[9] = "IX";
  romanFigures[5] = "V";
  romanFigures[4] = "IV";
  romanFigures[1] = "I";

  int div = 1;

  while (number >= div) {
    div *= 10;
  }

  div /= 10;

  while (number) {
    int lastNum = int(number / div);

    if (lastNum <= 3) {
      answer += repeater(romanFigures[div], lastNum);
    }

    else if (lastNum == 4) {
      answer += romanFigures[div] + romanFigures[div * 5];
    }

    else if (5 <= lastNum && lastNum <= 8) {
      answer +=
          romanFigures[div * 5] + repeater(romanFigures[div], (lastNum - 5));
    }

    else if (lastNum == 9) {
      answer += romanFigures[div] + romanFigures[div * 10];
    }

    number = floor(number % div);
    div /= 10;
  }

  return answer;
}
