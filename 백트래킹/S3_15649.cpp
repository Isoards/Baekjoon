#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> v;
vector<bool> visited;

void backtrack() {
  if (v.size() == m) { // m개를 선택한 경우
    for (int i = 0; i < m; i++) {
      cout << v[i] << ' ';
    }
    cout << '\n'; // endl 대신 '\n' 사용
    return;
  }

  for (int i = 1; i <= n; i++) {
    if (visited[i]) continue; // 방문한 경우 건너뛰기

    visited[i] = true; // 방문 표시
    v.push_back(i);
    backtrack(); // 재귀 호출
    // 원상복구
    v.pop_back();
    visited[i] = false;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;
  visited.resize(n + 1, false); // 1부터 시작

  backtrack();
  return 0;
}
