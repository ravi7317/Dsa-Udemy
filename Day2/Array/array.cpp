#include <iostream>
using namespace std;

int main() {

  int numbers[5] = {7, 5, 6, 12, 35};

  cout << "The numbers are: ";
  for (const int &n : numbers) {
    cout << n << "  ";
  }

  cout << "\nThe numbers are: ";
  for (auto i = 0; i < 5; ++i) {
    cout << numbers[i] << "  ";
  }

  return 0;
}