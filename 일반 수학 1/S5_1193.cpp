//
// Created by ISOARD on 25. 4. 4.
//

#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a = 0, b = 0;
  int n;
  int line = 0, sum = 0;
  cin >> n;

  // 1 -> 3 -> 6 -> 10 -> 15
  while (sum < n) {
    line++;
    sum += line;
  }

  int offset = sum - n;  // 몇번째 대각선인지

  if (line % 2 == 0) {  // 대각선이 짝수일 경우
    // 정순 계산
    a = line - offset;
    b = offset + 1;
  } else {  // 대각선이 홀수일 경우
    // 역순 계
    a = offset + 1;
    b = line - offset;
  }

  cout << a << "/" << b << endl;
  return 0;
}