//
// Created by ISOARD on 25. 4. 20.
// 구간 합 구하기 4 - 구간합

#include <iostream>

using namespace std;

int n, m;
int arr[100001];
int prefix[100001];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;
  int a, b;
  int result = 0;

  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }

  for (int i = 1; i <= n; i++) {
    prefix[i] = prefix[i - 1] + arr[i];  // 누적합 배열 만들기
  }

  for (int i = 1; i <= m; i++) {
    cin >> a >> b;
    result = prefix[b] - prefix[a - 1];  // 구간 a ~ b의 합
    cout << result << "\n";
  }
}