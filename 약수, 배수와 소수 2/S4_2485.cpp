#include <iostream>
using namespace std;

int devide(int x, int y){
    if (x % y == 0){
        return y;
    }
    else {
        return devide(y, x % y);
    }
}

int main(){
    int a, t;
    int list[100000];
    int list_distance[100000];
    int count = 0;
    cin >> t;

    // 배열 삽입
    for (int i = 0; i < t; i++) {
        cin >> a;
        list[i] = a;
    }
    // 배열 사이의 거리
    for (int i = 0; i < t - 1; i++){ 
        list_distance[i] = list[i + 1] - list[i];
    }

    // 배열 사이의 최대공약수 구하기
    int min = list_distance[0];
    for (int i = 1; i < t - 1; i++){
        min = devide(min, list_distance[i]);
    }

    // 추가로 심어야 하는 갯수
    for (int i = 0; i < t - 1; i++){
        count += (list_distance[i] / min) - 1;
    }

    cout << count << endl;
    return EXIT_SUCCESS;
}