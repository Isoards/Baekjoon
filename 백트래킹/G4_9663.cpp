//
// Created by ISOARD on 25. 3. 25.
//

#include <iostream>
#include <vector>

using namespace std;

int n;
int cnt = 0;
vector<bool> visited_col(15, false); // 열 (세로)
vector<bool> visited2_diag1(15, false); // \ 대각선
vector<bool> visited3_diag2(15, false); // / 대각선

int backtrack(int row) {
    vector<int> v (n, 0);

    if (row == n) // 마지막 행까지 도달한 경우
    {
        cnt++;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        // 같은 열에 있는 경우, 대각선에 있는 경우
        if (visited_col[i] || visited2_diag1[row - i + n - 1] || visited3_diag2[row + i]) continue;
        visited_col[i] = visited2_diag1[row - i + n - 1] = visited3_diag2[row + i] = true;
        backtrack(row + 1); // 다음 행으로 이동
        visited_col[i] = visited2_diag1[row - i + n - 1] = visited3_diag2[row + i] = false;
    }
    return 0;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;

    backtrack(0);

    cout << cnt << endl;
    return 0;
}