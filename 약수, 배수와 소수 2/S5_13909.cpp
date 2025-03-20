#include <iostream>
using namespace std;

int main() {
    int a;
    int count = 0;
    cin >> a;

    for(int i = 1; i * i <= a; i++) {
        count ++;
    }

    cout << count << endl;
    return 0;
}

/* 배열로 저장해서 풀기에는 범위가 넓어 메모리가 초과가 나와 수학적 규칙을 찾아 배열없이 풀어야 한다.
특정 창문이 열려있으려면 그 창문을 홀수 번 건드려야 하는데 그 경우는 약수가 홀수일 경우에만 해당된다.
어떤 수의 약수 개수가 홀수가 되는 경우는 그 수가 완전제곱수일 때만 해당된다. (1 * 1, 2 * 2, 3 * 3) 
*/