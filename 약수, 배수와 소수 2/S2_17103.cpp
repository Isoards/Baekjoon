#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 에라토스테네스의 체 구현
    int MAX = 1000001;
    vector<bool> prime(MAX, true); // 처음에는 모든 수를 소수로 가정
    prime[0] = prime[1] = false; // 0과 1은 소수가 아님

    for(int i = 2; i * i < MAX; i++){
        if(prime[i]) { // i가 소수인 경우
            for(int j = i * i; j < MAX; j += i){
                prime[j] = false; //i의 배수들을 제거
            }
        }
    }

    int t, a;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a;
        int count = 0;

        for(int j = 2; j <= a/2; j++){
            if(prime[j] && prime[a-j]) { // j와 a-j가 모두 소수인 경우
                count++; // 10일경우 2,8 / 3,7 / 4,6 이런식으로
            }
        }
        cout << count << endl;
    }

    return 0;
}