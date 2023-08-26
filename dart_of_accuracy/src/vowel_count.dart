import "dart:core";

int getCount(String inputStr) {
  List<String> vowels = ["a", "e", "i", "o", "u"];
  int count = 0;

  for (int i = 0; i < inputStr.length; i++) {
    if (vowels.contains(inputStr[i])) {
      count++;
    }
  }

  return count;
}
