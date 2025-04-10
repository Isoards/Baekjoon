#include <iostream>
using namespace std;

int arr[1000001];
int n;
int result;

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int current_sum = arr[0];  // 현재까지의 연속합
  result = arr[0];           // 최댓값 초기화

  // 1번째 원소부터 끝까지 탐색
  for (int i = 1; i < n; i++) {
    // 현재 원소를 단독으로 시작할지, 이전까지의 합에 더할지 결정
    current_sum = max(arr[i], current_sum + arr[i]);

    // 현재까지의 합과 전체 최댓값 비교하여 갱신
    result = max(result, current_sum);
  }

  cout << result << endl;  // 최댓값 출력
}