//
// Created by ISOARD on 25. 4. 16.
// 포도주 마시기 - DP

#include <iostream>

using namespace std;

int n;
int cost[10001];  // cost[i]: i번째 포도주 잔에 들어있는 포도주의 양
int dp[10001];  // dp[i]: i번째 잔까지 고려했을 때 마실 수 있는 포도주의 최대 양

void solve() {
  dp[0] = cost[0];
  dp[1] = cost[0] + cost[1];
  dp[2] = max(max(cost[0] + cost[2], cost[1] + cost[2]), dp[1]);

  for (int i = 3; i < n; i++) {
    dp[i] = max(max(dp[i - 2] + cost[i],  // i번째 잔만 마시는 경우
                    dp[i - 3] + cost[i - 1] +
                        cost[i]),  // i-1, i번째 잔을 연속으로 마시는 경우
                dp[i - 1]          // 현재 잔을 마시지 않는 경우
    );
  }

  cout << dp[n - 1] << endl;
}

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> cost[i];
  }

  solve();
  return 0;
}