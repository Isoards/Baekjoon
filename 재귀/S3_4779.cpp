//
// Created by ISO on 25. 3. 30.
//

#include <iostream>

using namespace std;

// 3등분으로 나누고 가운데 부분을 공백으로 채운다
// 왼쪽: start ~ start + a - 1
// 가운데: start + a ~ start + 2a - 1 <-- 공백
// 오른쪽: start + 2a ~ start + len - 1
void cantor(char result[],int start, int len) {
  int third = len / 3; // 3등분

  if (len == 1) return; // 종료조건

  // 전체 구간을 3등분하고, 가운데 1/3 부분을 공백으로 채운다
  for (int i = start + third; i < start + 2 * third; ++i) {
    result[i] = ' ';
  }
    cantor(result,start, third); // 왼쪽 부분
    cantor(result,start + 2 * third, third); // 오른쪽 부분

}

// STRING을 사용한 경우
int main() {
  int n;
  while (cin >> n) {
    int len = 1;
    for (int i = 0; i < n; ++i) len *= 3;

    string result(len, '-');
    cantor(result.data(), 0, len);

    cout << result << '\n';
  }
}

// CHAR을 사용한 경우
// int main() {
//   int n;
//   while(cin >> n) {
//     int len = pow(3, n);
//     char result[len];
//     fill_n(result, len, '-');
//     cantor(result, 0, len);
//
//     for (int i = 0; i < pow(3, n); i++) {
//       cout << result[i];
//     }
//     cout << '\n';
//   }
// }
