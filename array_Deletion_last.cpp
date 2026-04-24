#include <iostream>

int del(int UB, int LB, int n, int i, int A[]) {
  int k;
  for (k = i; k < UB - 1; k++) {
    A[k] = A[k + 1];
  }
  n--;
  return n;
}
int main() {
int capacity = 5;
int n = 5;
int A[capacity] = {34, 3422, 343, 33, 44};
del(5, 0, 5, 2, A);
for (int j = 0; j < n; j++) {
std::cout << A[j] << ", ";
}
  return 0;
}
