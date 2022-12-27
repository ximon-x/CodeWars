#include <iostream>

unsigned int cookingTime(unsigned int eggs) {
  unsigned int total_time = 0;

  while (eggs > 0) {
    if (eggs < 8) {
      total_time = total_time + 5;
      eggs = eggs - eggs;
    } else {
      total_time = total_time + 5;
      eggs = eggs - 8;
    }
  }

  return total_time;
}

int main() {
  std::cout << cookingTime(5) << std::endl;

  return 0;
}
