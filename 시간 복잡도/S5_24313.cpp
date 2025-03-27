//
// Created by ISOARD on 25. 3. 27.
//

#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, c, n;
  bool isValid = true;

  cin >> a >> b;
  cin >> c;
  cin >> n;

  for (int i = n; i <= 100; i++) {
    int gn = c * i;
    int fn = a * i + b;

    if (fn > gn) {
      isValid = false;
      break;
    }
  }

  cout << (isValid ? 1 : 0) << '\n';
}