#include <iostream>

using namespace std;
int MAX = 1000000;

int main() {
    // n = 도시, m = 버스
    int n, m;
    cin >> n;
    cin >> m;
    int arr[100][100]; // 2 <= n <= 100

    // 배열 초기화, 출발지 = 도착지 비용 0, 나머지는 최대한의 비용으로 설정
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) arr[i][j] = 0;
            else arr[i][j] = MAX;
        }
    }

    // 비용 설정
    for (int i = 0; i < m; i++) {
        // 출발지, 도착지, 비용 입력
        int a, b, c;
        cin >> a >> b >> c;
        --a;
        --b;

        // c가 최소비용인 경우 갱신
        if (arr[a][b] > c) {
            arr[a][b] = c;
        }
    }

    // 플로이드-와샬 알고리즘 : 모든 정점 쌍에 대한 최단 경로를 구하는 알고리즘
    // 모든 정점 간의 최소 비용 구할 때 사용
    // 시간복잡도 O(n^3)
    for (int k = 0; k < n; k++) { // 경유지
        for (int i = 0; i < n; i++) { // 출발지
            for (int j = 0; j < n; j++) { // 도착지
                if (arr[i][k] != MAX && arr[k][j] != MAX) { // 경유지의 비용이 있는 경우
                    // 경유하는 것과 한번에 가는 것의 비용을 비교 후 더 작은 값으로 갱신
                    arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
                }
            }
        }
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == MAX) { // 최대한의 비용일 경우 0 출력
                cout << 0 << " ";
            }
            else cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}