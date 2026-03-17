#include <iostream>
void printn(int n) {
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0||j == 0|| i ==n - 1 || j ==n - 1){
       std::cout << "*";
      } else {
       std::cout <<std::endl;
      }
    }
  }
}
int main() {
  int t;
  std:: cin >> t;
  for (int i = 0; i < t; i++) {
  int n;
  std::cin >> n;
  printn(n);
  }
}
