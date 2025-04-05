//
// Created by ISOARD on 25. 4. 5.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int cnt = 0;
  int n;
  cin >> n;
  // 666부터 시작해서 하나씩 숫자를 증가시키며 탐색
  for (int i = 666; i < 10000000; i++) {
    // 숫자를 문자열로 바꾸고 문자열에 666이 포함되어 있는 경우
    if (to_string(i).find("666") != string::npos) {
      // string::npos는 찾지 못했다는 의미, 즉 666이 있으면 그 위치를 반환
      cnt += 1;
    }
    if (cnt == n) {
      cout << i << "\n";
      break;
    }
  }
  return 0;
}