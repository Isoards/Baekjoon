#include <iostream>

using namespace std;

int divide(int x, int y){
    if(x % y == 0){
        return y;
    }
    else {
        return divide(y, x % y);
    }
}

int main(){
    long long int a, b;
    cin >> a >> b;

    if(a >> b){
        cout << a * b / divide(a, b) << endl;
    }
    else {
        cout << a * b / divide(b, a) << endl;
    }
    return EXIT_SUCCESS;
}