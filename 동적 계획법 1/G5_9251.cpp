#include <iostream>
#include <string>

using namespace std;

// dp[i][j]: arr1의 i번째 문자까지, arr2의 j번째 문자까지 비교했을 때 LCS의 최대 길이
int dp[1001][1001];
string arr1;
string arr2;

void solve() {
  // arr1의 i번째 문자까지, arr2의 j번째 문자까지 비교
  for (int i = 1; i <= arr1.length(); i++) {
    for (int j = 1; j <= arr2.length(); j++) {
      // 만약 현재 문자끼리 같으면
      if (arr1[i - 1] == arr2[j - 1]) {
        // 대각선 왼쪽 위(dp[i-1][j-1]) 값에 +1
        dp[i][j] = dp[i - 1][j - 1] + 1;
      } else {
        // 다르면 위(dp[i-1][j])나 왼쪽(dp[i][j-1]) 중 큰 값 선택
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  cout << dp[arr1.length()][arr2.length()] << endl;
}

int main() {
  // 두 문자열 입력 받기
  cin >> arr1;
  cin >> arr2;

  // LCS 계산
  solve();

  return 0;
}
