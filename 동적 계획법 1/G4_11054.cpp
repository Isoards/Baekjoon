//
// Created by ISOARD on 25. 4. 18.
// 바이토닉 수열 - DP

#include <iostream>

using namespace std;

int n;
int dp_left[1001];   // 왼쪽에서부터의 LIS (증가 수열)
int dp_right[1001];  // 오른쪽에서부터의 LDS (감소 수열)
int arr[1001];
int result = 0;

void solve() {
  // 왼쪽에서 오른쪽으로 LIS 계산
  for (int i = 1; i <= n; i++) {
    dp_left[i] = 1;  // 자기 자신 하나만으로도 수열 길이 1

    for (int j = 1; j < i; j++) {  // 앞의 모든 원소와 비교
      if (arr[i] > arr[j]) {
        dp_left[i] =
            max(dp_left[i], dp_left[j] + 1);  // 더 긴 증가 수열이면 갱신
      }
    }
  }

  // 오른쪽에서 왼쪽으로 LDS 계산
  for (int i = n; i >= 1; i--) {
    dp_right[i] = 1;

    for (int j = i + 1; j <= n; j++) {  // 뒤의 모든 원소와 비교
      if (arr[i] > arr[j]) {
        dp_right[i] =
            max(dp_right[i], dp_right[j] + 1);  // 더 긴 감소 수열이면 갱신
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    result = max(result, dp_left[i] + dp_right[i] - 1);  // 중복 제거 - 1
  }

  cout << result << endl;
}

int main() {
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }

  solve();
  return 0;
}