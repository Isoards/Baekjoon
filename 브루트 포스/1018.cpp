#include <iostream>

using namespace std;

string table_white[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",        
    "WBWBWBWB",        
    "BWBWBWBW",
    };

string table_black[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    };
string board[50];

int cnt_white(int x, int y){
    int count = 0;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if(board[x + i][y + j] != table_white[i][j]){
                count ++;
            }
        }
    }
    return count;
}

int cnt_black(int x, int y){
    int count = 0;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if(board[x + i][y + j] != table_black[i][j]){
                count ++;
            }
        }
    }
    return count;
}

int main(){
    int a, b;
    int result = 64;

    cin >> a >> b;

    for (int i = 0; i < a; i++){
        cin >> board[i];
    }
    for (int i = 0; i + 8 <= a; i++){
        for (int j = 0; j + 8 <= b; j++){
            int tmp = min(cnt_white(i, j), cnt_black(i, j));
            if (tmp < result) result = tmp;
        }
    }
    cout << result << endl;
    return 0;
}