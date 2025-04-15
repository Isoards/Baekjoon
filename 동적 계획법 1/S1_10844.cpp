//
// Created by ISOARD on 25. 4. 15.
// 쉬운 계단 수 - DP 문제

#include <iostream>
using namespace std;

int MOD = 1000000000;
int n;
int arr[101][10];  // arr[i][j]: 길이가 i이고 끝자리가 j인 계단 수 개수

void solve() {
  // 초기화: 길이가 1일 때, 1~9는 계단 수 1개씩
  arr[1][0] = 0;
  for (int i = 1; i <= 9; i++) {
    arr[1][i] = 1;
  }

  for (int i = 2; i <= n; i++) {    // i: 자릿수
    for (int j = 0; j <= 9; j++) {  // j: 현재 자릿수
      if (j > 0)
        arr[i][j] += arr[i - 1][j - 1];
      if (j < 9)
        arr[i][j] += arr[i - 1][j + 1];
      arr[i][j] %= MOD;
    }
  }

  int result = 0;
  for (int i = 0; i <= 9; i++) {
    result = (result + arr[n][i]) % MOD;
  }

  cout << result << endl;
}

int main() {
  cin >> n;

  solve();
  return 0;
}
