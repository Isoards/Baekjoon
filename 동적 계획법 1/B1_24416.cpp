#include <iostream>
#include <vector>

using namespace std;

int fib_recur(int n, int count) {
    if (n == 1 || n == 2) {
        count += 1;
        return count;
    }
    else return (fib_recur(n - 1, count) + fib_recur(n - 2, count));
}

int fib_dp(int n, int count) {
    vector<int> f(n);
    f[0] = f[1] = 1;
    for (int i = 2; i < n; i++) {
        f[i] = f[i - 1] + f[i - 2];
        count++;
    }
    return count;
}
int main() {
    int a;
    cin >> a;

    cout << fib_recur(a, 0) << " " << fib_dp(a, 0) << endl;

}