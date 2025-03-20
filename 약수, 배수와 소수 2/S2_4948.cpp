#include <iostream>
#include <list>
#include <vector>
using namespace std;

// 시간 복잡도 n * √n
void dist(int a) {
    int b = 2 * a;
    list<int> result;
    for(int i = a + 1; i <= (2 * a); i++){
        int k = 0;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0) k = 1;
            }
        if (k == 0) result.push_back(i);
        
    }
    cout << result.size() << endl;
}

// 시간복잡도 n log log n
void dist_v2(int a){
    int b = 2 * a;
    vector<bool> result(b + 1, true);
    result[0] = result[1] = false;
    int count = 0;

    for(int i = 2; i * i <= b; i++) {
        if(result[i] == true) {
            for(int j = i * i; j <= b; j+= i){
                result[j] = false;
            }
        }
    }
    for(int i = a + 1; i <= b; i++) x`{
        if(result[i] == true) count++;
    }
    cout << count << endl;
}

int main() {
    int t;

    while(true){
        cin >> t;
        if(t == 0) break;
        dist_v2(t);
    }
}