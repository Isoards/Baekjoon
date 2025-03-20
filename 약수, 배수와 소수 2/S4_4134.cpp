#include <iostream>
using namespace std;

int isPrime(long long x){
    if (x <= 1) return false;

    for (long long i = 2; i * i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    long long t, a;
    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> a;
        while (!isPrime(a)){
            a++;
        }
        cout << a << endl;
    }
}