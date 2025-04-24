//
// Created by ISOARD on 25. 4. 24.
//

#include <iostream>
using namespace std;

int main() {
  int result = 0;

  for (int i = 0; i < 5; i++) {
    int n;
    cin >> n;
    result += n * n;
  }
  cout << result % 10 << "\n";
}