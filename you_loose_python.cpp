#include <iostream>
#include <math>

int main() {
  long n, k, m;
  std::cin >> n >> k;
  for (int i = 0; i < n* 10; i++) {
    for (int j = 0; j < n* 10; j++) {
       m += sqrt(i + j) - abs(i - j);
    }
  }
  std::sout << "I don't know why but it works fuster htan Python.\nAnswer: " << m;
  return 0;
}
