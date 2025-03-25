//
// Created by ISOARD on 25. 3. 24.
// 중복 조합 문제
// 중복을 허용하면서 비내림차순으로 정렬
// 앞에 선택한 숫자보다 같거나 큰 경우에만 선택


#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> v;

int backtrack(int start) {
  if (v.size() == m) {
    for (int i = 0; i < m; i++) {
      cout << v[i] << " ";
    }
    cout << '\n';
    return 0;
  }

  for (int i = start; i <= n; i++) {
    v.push_back(i);
    backtrack(i); // 현재 선택한 숫자(i)보다 같거나 큰 숫자만 선택 (중복)
    v.pop_back();
  }
  return 0;
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;

  backtrack(1);

  return 0;
}