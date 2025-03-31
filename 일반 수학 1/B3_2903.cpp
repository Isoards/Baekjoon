//
// Created by ISO on 25. 3. 31.
//

#include <iostream>
// #include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;

  // 2^n + 1 직접 계산
  int len = 1;
  for (int i = 0; i < n; i++) {
    len *= 2;
  }
  len += 1;

  if (n >= 1 && n <= 15) {
    cout << len * len << endl;
    // pow 함수는 double형을 반환하므로 오답 처리
    // cout << pow(( 1 + pow(2, n) ), 2) << endl;
  }
  return 0;
}
