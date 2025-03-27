//
// Created by ISOARD on 25. 3. 26.
//

#include <iostream>

using namespace std;

int v[9][9] = {0, };
bool row[9][10] = {false, };
bool col[9][10] = {false, };
bool box[9][10] = {false, };

bool backtrack() {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (v[i][j] == 0) {  // 빈칸인 경우
        for (int num = 1; num <= 9; num++) {
          int boxIdx = (i / 3) * 3 + j / 3;
          if (!row[i][num] && !col[j][num] && !box[boxIdx][num])  // 방문하지 않은 경우;
          {
            v[i][j] = num;
            row[i][num] = col[j][num] = box[boxIdx][num] = true;  // 방문 표시
            if (backtrack()) return true;  // 다음 칸으로 이동
            v[i][j] = 0;
            row[i][num] = col[j][num] = box[boxIdx][num] = false;
          }
        }
        return false; // 빈칸인데 채울 수 없는 경우
      }
    }
  }
  return true; // 모든 칸이 채워진 경우
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // 가로, 세로 입력
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> v[i][j];
    }
  }
  // 이미 채워진 경우
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (v[i][j] != 0) {
        int num = v[i][j]; // 방문한 숫자
        int boxIdx = (i / 3) * 3 + j / 3; // 3x3 박스 인덱스,
        // 행은 3칸씩 위에서 아래로 떨어지니까 3 곱해주고, 열은 거기에 더해준다.
        row[i][num] = true;
        col[j][num] = true;
        box[boxIdx][num] = true;
      }
    }
  }
  backtrack();

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << v[i][j] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
