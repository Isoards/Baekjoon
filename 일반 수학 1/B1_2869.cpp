//
// Created by ISOARD on 25. 4. 4.
//

#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a, b, v;
  cin >> a >> b >> v;

  int day = (v - b) / (a - b);
  // int height = 0;
  //
  // while (height < v) {
  //   day++; // 하루 증가
  //   if (height + a >= v) { // 목표 도달
  //     break;
  //   }
  //   else {
  //     height = height + a - b; // 하루에 올라간 높이
  //   }
  // }

  cout << day << "\n";  // 걸린 일수 출력
}