//
// Created by ISOARD on 25. 4. 25.
// 직각삼각형 - 수학

#include <iostream>
using namespace std;

int main() {
  while (true) {
    int a, b, c;
    cin >> a >> b >> c;
    int a2 = a * a;
    int b2 = b * b;
    int c2 = c * c;

    if (a == 0 && b == 0 && c == 0)
      break;

    if (a2 + b2 == c2)
      cout << "right" << endl;
    else if (b2 + c2 == a2)
      cout << "right" << endl;
    else if (c2 + a2 == b2)
      cout << "right" << endl;
    else
      cout << "wrong" << endl;
  }
}