//
// Created by ISO on 25. 4. 21.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    int result = 0, count = 0;

    for (int j = 0; j < arr[i].length(); j++) {
      if (arr[i][j] == 'O') {
        count++;
        result += count;
      } else {
        count = 0;
      }
    }

    cout << result << '\n';
  }

  return 0;
}
