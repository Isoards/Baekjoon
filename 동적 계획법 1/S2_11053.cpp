//
// Created by ISOARD on 25. 4. 17.
// 가장 긴 증가하는 부분 수열 (LIS: Longest Increasing Subsequence)

#include <iostream>

using namespace std;

int n;
int arr[1001];
int dp[1001];  // dp[i]: i번째 숫자를 마지막 원소로 하는 LIS의 길이
int result = 1;

void solve() {
  for (int i = 0; i < n; i++) {
    dp[i] = 1;  // 기본값: 자기 자신 하나만으로 길이 1

    for (int j = 0; j < i; j++) {
      // arr[i]가 arr[j]보다 크다면,
      // arr[j]까지의 LIS에 arr[i]를 붙일 수 있음
      if (arr[i] > arr[j]) {
        dp[i] = max(dp[i], dp[j] + 1);  // 최대값으로 갱신
      }
    }
  }

  for (int i = 0; i < n; i++) {
    result = max(result, dp[i]);
  }

  cout << result << endl;
}

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  solve();
  return 0;
}