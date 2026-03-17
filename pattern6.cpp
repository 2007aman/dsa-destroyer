#include <iostream>
void print1(int n) {
  int iniS = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < n - i; j++) {
      std::cout << "*";
    }
    for (int j= 1; j < iniS; j++) {
      std::cout << "*";
    }
    for (int j = 1; j < n - i; j++) {
      std::cout< "*";
   }
    iniS += 2;
    std::cout << std::endl;
  }
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
