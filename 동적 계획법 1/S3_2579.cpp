//
// Created by ISO on 25. 4. 13.
// 계단 오르기 문제 - DP 풀이

#include <iostream>
using namespace std;

int n;
int dp[301];
int cost[301];

void stair() {
  dp[0] = cost[0];                 // 첫 번째 계단까지 점수는 그대로
  dp[1] = dp[0] + cost[1];         // 두 번째 계단은 첫 계단 + 두 번째 계단 점수
  dp[2] = max(cost[0] + cost[2],   // 1칸 건너뛰고 첫+셋째 계단
              cost[1] + cost[2]);  // 두 번째, 세 번째 연속으로 밟기

  // 3번째 계단부터는 점화식 적용
  for (int i = 3; i < n; i++) {
    dp[i] = max(dp[i - 2] + cost[i],  // 한 칸 건너뛰고 밟는 경우 (O(dp) X O)
                dp[i - 3] + cost[i - 1] +
                    cost[i]);  // 연속 두 계단 밟는 경우 (O(dp) X O O)
    // 세 계단 연속으로 밟는 경우는 고려하지 않으므로 자연스럽게 조건 충족
  }

  cout << dp[n - 1] << endl;  // 마지막 계단까지 얻을 수 있는 최대 점수 출력
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> cost[i];
  }

  stair();
  return 0;
}
