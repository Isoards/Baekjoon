// Created by ISOARD on 25. 3. 24.
// 중복 순열 문제
// 모든 경우의 수 출력

#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> v;

int backtrack() {
  if (v.size() == m) {
    for (int i = 0; i < m; i++) {
      cout << v[i] << ' ';
    }
    cout << '\n';
    return 0;
  }
  for (int i = 1; i <= n; i++) {
    v.push_back(i);
    backtrack(); // 시작지점 제한 X (모든 숫자 중복 가능)
    v.pop_back();
  }
  return 0;
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;

  backtrack();

  return 0;
}