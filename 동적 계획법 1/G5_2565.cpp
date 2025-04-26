//
// Created by ISOARD on 25. 4. 26.
// 전깃줄 - DP (LIS)

#include <iostream>
using namespace std;

int n;
int cost[501];
int dp[501];  // dp[i]: i번 A 전봇대까지 봤을 때 최대 증가 부분 수열 길이
int result = 0;

void solve() {
  // 1번부터 500번까지 모든 A 전봇대 위치를 순회
  for (int i = 1; i <= 500; i++) {
    if (cost[i] == 0)
      continue;  // 연결되지 않은 전봇대는 스킵

    dp[i] = 1;  // 자기 자신만 선택했을 때 길이 1

    // 현재 이전의 모든 j를 비교
    for (int j = 1; j < i; j++) {
      if (cost[j] == 0)
        continue;  // 연결되지 않은 전봇대는 스킵

      if (cost[i] > cost[j]) {
        dp[i] = max(dp[i], dp[j] + 1);  // 오름차순
      }
    }
  }

  for (int i = 1; i <= 500; i++) {
    result = max(result, dp[i]);
  }

  cout << n - result << endl;
}

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    cost[a] = b;  // A위치에 연결된 B위치 저장
  }

  solve();
  return 0;
}