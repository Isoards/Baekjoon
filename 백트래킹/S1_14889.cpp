//
// Created by ISO on 25. 3. 29.
//

// 이 문제는 N명을 두 팀으로 나누어 능력치 차이를 최소화하는 문제
// 각 팀의 능력치는 팀원들 간의 시너지(Sij + Sji)의 합으로 계산됨

#include <iostream>

using namespace std;
int n;
int v[20][20];
int minResult = 100;
bool visited[20];

void backtrack(int idx, int depth) { // idx: 현재 인덱스, depth: 현재 깊이(팀원 수)
  // N은 짝수이기 때문에 depth가 n/2에 도달하면 팀을 나눌 수 있다.
  if (depth == n / 2) {
    int team1 = 0, team2 = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (visited[i] && visited[j]) { // 팀1
          team1 += v[i][j]; // 팀1의 능력치
        } else if (!visited[i] && !visited[j]) { // 팀2
          team2 += v[i][j]; // 팀2의 능력치
        }
      }
    }
    minResult = min(minResult, abs(team1 - team2)); // 팀1과 팀2의 능력치 차이
    return;
  }

  // 팀을 나누는 경우의 수를 구하기
  for (int i = idx; i < n; i++) {
    if (!visited[i]) { // 방문하지 않은 경우
      visited[i] = true; // 팀1에 포함
      backtrack(i + 1, depth + 1); // 다음 팀원 선택
      visited[i] = false; // 불가능할 경우 팀1에서 제외
    }
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> v[i][j];
    }
  }

  backtrack(0, 0);
  cout << minResult << "\n";

  return 0;
}