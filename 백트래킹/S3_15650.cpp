//
// Created by ISOARD on 25. 3. 23.
//

#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> v;

void backtrack(int start) {
  if (v.size() == m) {
    for (int i = 0; i < m; i++) {
      cout << v[i] << ' ';
    }
    cout << '\n';

    return;
  }

  for (int i = start; i <= n; i++) {
    v.push_back(i);
    backtrack(i + 1);
    v.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;
  backtrack(1);
 }