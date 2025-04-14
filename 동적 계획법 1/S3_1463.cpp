//
// Created by ISO on 2025. 4. 14.
// 1로 만들기 - DP 활용

#include <iostream>

using namespace std;

int n;
int dp[1000001];  // dp[i] = i를 1로 만들기 위한 최소 연산 횟수

void solve() {
  dp[1] = 0;  // 1은 연산 없이 자기 자신이므로 0회

  for (int i = 2; i <= n; i++) {
    // 기본적으로 1을 빼는 연산을 수행하는 경우
    dp[i] = dp[i - 1] + 1;

    // 2로 나누어떨어질 경우: dp[i/2] + 1 과 비교
    if (i % 2 == 0) {
      dp[i] = min(dp[i], dp[i / 2] + 1);
    }

    // 3으로 나누어떨어질 경우: dp[i/3] + 1 과 비교
    if (i % 3 == 0) {
      dp[i] = min(dp[i], dp[i / 3] + 1);
    }
  }

  cout << dp[n] << endl;
}

int main() {
  cin >> n;

  solve();
  return 0;
}
