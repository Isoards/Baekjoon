//
// Created by ISO on 25. 4. 1.
//

#include <iostream>

using namespace std;

int main() {
  int n;
  int result = 1;
  int i = 1;

  cin >> n;

  while (result < n) {
    result += 6 * i;
    i++;
  }
  cout << i << endl;
  return 0;
}