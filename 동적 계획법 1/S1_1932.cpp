//
// Created by ISO on 25. 4. 12.
// S1 정수 삼각형, Bottom-up 방식 사용

#include <iostream>
using namespace std;

int cost[501][501];
int n;

// 아래에서부터 위로 올라오며 최대 경로 합을 구하는 함수
void solveTriangleDP() {
  for (int i = n - 2; i >= 0; i--) {
    for (int j = 0; j <= i; j++) {
      // 아래 두 값 중 더 큰 값을 현재 위치에 누적
      cost[i][j] += max(cost[i + 1][j], cost[i + 1][j + 1]);
    }
  }

  cout << cost[0][0] << endl;
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cin >> cost[i][j];
    }
  }

  solveTriangleDP();
  return 0;
}
