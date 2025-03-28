//
// Created by ISOARD on 25. 3. 28.
//

#include <iostream>

using namespace std;

int v[10];
int s[4];                  // +, -, *, /
int maxTmp = -1000000000;  // 최대값 범위: -10억 ~ 10억
int minTmp = 1000000000;   // 최소값
int n;

int backtrack(int idx, int result) {
  // 종료 조건
  if (idx == n) {
    // 최대값과 최소값 업데이트
    maxTmp = max(maxTmp, result);
    minTmp = min(minTmp, result);
    return 0;
  }

  for (int i = 0; i < 4; i++) {
    if (s[i] > 0) { // 연산자 사용 가능 여부 확인
      s[i]--; // 해당 연산자 사용
      int tmp = result;

      if (i == 0) { // +
        tmp += v[idx];
      } else if (i == 1) { // -
        tmp -= v[idx];
      } else if (i == 2) { // *
        tmp *= v[idx];
      } else if (i == 3) { // /
        if (v[idx] > 0) {
          tmp = result / v[idx];
        } else {
          tmp = -(-(result / v[idx])); // 음수 나누기 처리(조건)
        }
      }
      backtrack(idx + 1, tmp); // 다음 인덱스와 결과값으로 재귀 호출
      s[i]++; // 사용한 연산자 복구
    }
  }
  return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < 4; i++) {
    cin >> s[i];
  }

  backtrack(1, v[0]); // 초기값 v[0]로 설정, v[0]은 idx 0에서 사용됨
  cout << maxTmp << endl;
  cout << minTmp << endl;
  return 0;
}