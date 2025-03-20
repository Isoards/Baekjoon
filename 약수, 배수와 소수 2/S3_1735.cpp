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
    int a, b, c, d;
    int x, y;
    cin >> a >> b;
    cin >> c >> d;
    x = (a * d) + (b * c); // 분자
    y = b * d; // 분모
    int max = divide(y, x);

    cout << x / max << " " << y / max << endl;
    
    return EXIT_SUCCESS;
}