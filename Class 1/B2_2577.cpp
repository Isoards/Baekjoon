//
// Created by ISOARD on 25. 4. 23.
// 숫자의 개수 - 문자열

#include <iostream>
#include <string>
using namespace std;

int cnt[10];

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int result = a * b * c;
  string s = to_string(result);

  for (char ch : s) {
    cnt[ch - '0']++;
  }

  for (int i = 0; i < 10; i++) {
    cout << cnt[i] << '\n';
  }

  return 0;
}