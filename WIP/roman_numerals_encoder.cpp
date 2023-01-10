#include <map>
#include <string>
using namespace std;

string solution(int number) {
  string result = "";
  string num = to_string(number);

  map<int, string> roman_figures;
  roman_figures[1000] = "M";
  roman_figures[500] = "D";
  roman_figures[100] = "C";
  roman_figures[50] = "L";
  roman_figures[10] = "X";
  roman_figures[5] = "V";
  roman_figures[5] = "I";

  // Think of a better approach, this will be too WET.
  switch (num.length()) {
  case 4:
    for (int i = 0; i < num.length(); i++) {
    }

  case 3:

  case 2:

  case 1:

  default:
    return "";
  }

  return result;
}
