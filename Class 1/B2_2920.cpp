//
// Created by ISOARD on 25. 4. 23.
// 음계 - 문자열

#include <iostream>
using namespace std;

int main() {
  int arr[9];

  for (int i = 0; i < 8; i++) {
    cin >> arr[i];
  }

  bool asc = true, desc = true;

  for (int i = 0; i < 7; i++) {
    if (arr[i] < arr[i + 1])
      desc = false;
    else if (arr[i] > arr[i + 1])
      asc = false;
  }

  if (asc)
    cout << "ascending\n";
  else if (desc)
    cout << "descending\n";
  else
    cout << "mixed\n";

  return 0;
}