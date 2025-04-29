// FizzBuzz - 문자열

#include <iostream>
#include <string>
using namespace std;

int main() {
    int start = -1;  // 숫자가 발견되었을 때 그 숫자 저장
    int idx = -1;    // 숫자가 몇 번째 입력이었는지 저장

    for (int i = 1; i <= 3; ++i) {
        string s;
        cin >> s;
        if (s != "Fizz" && s != "Buzz" && s != "FizzBuzz") {
            start = stoi(s);
            idx = i;
        }
    }

    // 몇 번째 숫자였느냐에 따라 다음에 나올 숫자를 예측
    int next = start + (4 - idx);

    // FizzBuzz 규칙에 맞게 출력
    if (next % 15 == 0)
        cout << "FizzBuzz\n";
    else if (next % 3 == 0)
        cout << "Fizz\n";
    else if (next % 5 == 0)
        cout << "Buzz\n";
    else
        cout << next << '\n';

    return 0;
}
