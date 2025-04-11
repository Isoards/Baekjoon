// Created by ISO on 25. 4. 11.
// RGB 거리 문제 (DP 기반 최소 비용 계산)

#include <iostream>
#include <algorithm>

using namespace std;

int n;
int result;

// dp[i][j]: i번째 집을 j색으로 칠했을 때의 최소 비용
// 빨강(R), 초록(G), 파랑(B)
int dp[1001][3];

// cost[i][j]: i번째 집을 j색으로 칠하는 데 드는 비용
int cost[1001][3];

void rgb() {
  // 첫 번째 집의 비용 초기화
  dp[0][0] = cost[0][0];
  dp[0][1] = cost[0][1];
  dp[0][2] = cost[0][2];

  // i번째 집을 각 색으로 칠할 때의 최소 비용을 계산
  for (int i = 1; i < n; ++i) {
    dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + cost[i][0];  // 빨강
    dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + cost[i][1];  // 초록
    dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + cost[i][2];  // 파랑
  }

  result = min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});

  cout << result << endl;
}

int main() {
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
  }

  rgb();

  return 0;
}
