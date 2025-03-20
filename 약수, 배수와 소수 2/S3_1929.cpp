#include <iostream>

using namespace std;

int disc(int a, int b){
    if (a <= b){
        if (a == 1) return false;

        for (int i = 2; i * i <= a; i++){
            if (a % i == 0) return false;
        }
        return true;
    }
    else return false;
}

int main() {
    long long a, b, t;
    cin >> a >> b;
    t = b - a + 1;
    for (int i = 0; i < t; i++){
        long long result = disc(a, b);

        if(result == true){
            cout << a << endl;
        }
        a++;
    }
}
