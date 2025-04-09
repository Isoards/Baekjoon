//
// Created by ISOARD on 25. 4. 9.
//

#include <iostream>
using namespace std;

long long dp[101];  // 자료형 오버플로우 주의

void pre() {
  // 초기값 설정
  dp[1] = dp[2] = dp[3] = 1;
  dp[4] = dp[5] = 2;
  for (int i = 6; i <= 100; i++) {
    dp[i] = dp[i - 1] + dp[i - 5];  // 점화식, 시간복잡도 O(n)
  }
}

int main() {
  int t, n;
  cin >> t;

  pre();

  for (int i = 0; i < t; i++) {
    cin >> n;
    cout << dp[n] << '\n';
  }
  return 0;
}