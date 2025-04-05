//
// Created by ISOARD on 25. 4. 5.
//

#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, result = -1;
  cin >> n;

  // 봉지 하나만으로 나눠 떨어지는 경우 (5kg 또는 3kg만 사용하는 경우)
  if (n % 5 == 0) {
    result = n / 5;
  } else if (n % 3 == 0) {
    result = n / 3;
  }

  // 5kg 봉지를 0개부터 최대한 사용할 수 있는 개수까지 반복
  for (int i = 0; i <= n / 5; i++) {
    int remain = n - (5 * i); // 5kg 봉지로 채우고 남은 양
    if (remain % 3 == 0) {    // 나머지가 3kg 봉지로 나눠떨어지는 경우
      int total = i + (remain / 3); // 봉지 개수 = 5kg 개수 + 3kg 개수
      if (result == -1 || total < result) {
        result = total; // 최소 봉지 개수 갱신
      }
    }
  }
  cout << result << endl;
}
