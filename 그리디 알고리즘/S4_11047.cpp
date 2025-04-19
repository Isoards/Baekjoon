//
// Created by ISOARD on 25. 4. 19.
//

#include <iostream>

using namespace std;

int n, k;
int arr[11];
int cnt = 0;

void solve() {
  for (int i = n; i >= 1; i--) {
    if (k >= arr[i]) {
      cnt += k / arr[i];  // 최대 사용 갯수
      k %= arr[i];        // 나머지 처리
    }
  }

  cout << cnt << endl;
}

int main() {
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }

  solve();
  return 0;
}