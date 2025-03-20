#include <iostream>

using namespace std;

int divide(int x, int y) {
    if(x % y == 0){
        return  y;
    }
    return divide(y, x % y);
}

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int a, b, max;
        cin >> a >> b;
        if (a > b){
            max = divide(a, b);
        }
        else {
            max = divide(b, a);
        }
        cout << a * b / max << endl;
    }
}