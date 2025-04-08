#include <iostream>

using namespace std;

void dp(int n) {
  int dp[1000001];
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i <= n; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2]) % 15746; // 피보나치 수열
  }
  cout << dp[n];
}

int main() {
  int n;
  cin >> n;

  dp(n);
}