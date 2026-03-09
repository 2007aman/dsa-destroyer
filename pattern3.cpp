#include <iostream>
void print1(int n) {
  for (int i = 0; i < n; i++) {
    for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
      std::cout << ch << " ";
    }
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

