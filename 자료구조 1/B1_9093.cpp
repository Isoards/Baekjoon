//
// Created by ISOARD on 25. 4. 8.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();  // 개행 문자 제거

  for (int t = 0; t < n; t++) {
    string line;
    getline(cin, line);  // 한 줄 입력

    string word = "";
    for (int i = 0; i <= line.size(); i++) {
      if (i == line.size() || line[i] == ' ') {
        // 단어 끝났으니 뒤집어서 출력
        for (int j = word.size() - 1; j >= 0; j--) {
          cout << word[j];
        }
        if (i != line.size())
          cout << ' ';
        word = "";  // 다음 단어 준비
      } else {
        word += line[i];
      }
    }
    cout << '\n';
  }

  return 0;
}