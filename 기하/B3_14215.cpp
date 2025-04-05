//
// Created by ISOARD on 25. 4. 5.
//

#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a, b, c;

  cin >> a >> b >> c;

  if (a > b && a > c) {
    b + c <= a ? cout << 2 * (b + c) - 1 : cout << a + b + c;
  } else if (b > a && b > c) {
    a + c <= b ? cout << 2 * (a + c) - 1 : cout << a + b + c;
  } else if (c > a && c > b) {
    a + b <= c ? cout << 2 * (a + b) - 1 : cout << a + b + c;
  } else {
    cout << a + b + c;
  }

  return 0;
}