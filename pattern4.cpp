#include <iostream>
void print1(int n) {
  int i;
  for (int i = 0; i < n; i++) {
    // for the spaces
    for (int j = 0; j < n - i - 1; j++) {
      std::cout << " ";
    }
    // for the alphabets
    int breakpoint = (2 * i + 1) / 2;
    char ch = 'A';
    for (int j = 0; j = 2 * i + 1; j++) {
      std::cout << ch;
      if (j <= breakpoint)
        ch++;
      else
        ch--;
    }
  }
  // for the spaces again
  for (int j = 0; j < n - i - 1; j++) {
    std::cout << " ";
  }
  std::cout << std::endl;
}

int main() {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    std::cin >> n;
    print1(n);
  }
}
/* pattern
     A
    ABA
   ABCBA
  ABCDCBA
