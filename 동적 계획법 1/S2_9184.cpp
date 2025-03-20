#include <iostream>
#include <cstring>  // memset을 사용하기 위해 필요
using namespace std;

int f[21][21][21];  // DP 테이블 (전역 변수) - 값을 저장해서 중복 연산 방지

int recur(int a, int b, int c) {
    if(a <= 0 || b <= 0 || c <= 0) {
        return 1;
    }
    else if(a > 20 || b > 20 || c > 20) {
        return recur(20, 20, 20);
    }
    else if (a < b && b < c) {
        return recur(a, b, c-1) + recur(a, b-1, c-1) - recur(a, b-1, c);
    }
    else return recur(a-1, b, c) + recur(a-1, b-1, c) + recur(a-1, b, c-1) - recur(a-1, b-1, c-1);
}

// DP를 이용한 w(a, b, c) 함수
int dp(int a, int b, int c) {
    // Base Case (기본 조건)
    if (a <= 0 || b <= 0 || c <= 0) return 1;
    if (a > 20 || b > 20 || c > 20) return dp(20, 20, 20);  // 20을 초과하면 최대값으로 변환

    // 이미 계산된 값이 있으면 그대로 반환 (메모이제이션 활용)
    if (f[a][b][c] != -1) return f[a][b][c];

    // 점화식 적용
    if (a < b && b < c) {
        f[a][b][c] = dp(a, b, c - 1) + dp(a, b - 1, c - 1) - dp(a, b - 1, c);
    } else {
        f[a][b][c] = dp(a - 1, b, c) + dp(a - 1, b - 1, c) + dp(a - 1, b, c - 1) - dp(a - 1, b - 1, c - 1);
    }

    return f[a][b][c];  // 계산된 값을 저장하고 반환
}

int main() {
    memset(f, -1, sizeof(f));  // DP 테이블을 -1로 초기화 (값이 아직 저장되지 않음을 표시)

    while (true) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == -1 && b == -1 && c == -1) break;  // -1, -1, -1 입력 시 종료

        cout << "w(" << a << ", " << b << ", " << c << ") = " << dp(a, b, c) << endl;
    }
}
