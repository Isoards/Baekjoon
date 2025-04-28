// 수 찾기 - 이진 탐색 (Binary Search)

#include <algorithm>
#include <iostream>

using namespace std;

int n, m;
int arr1[100001];
int arr2[100001];

bool binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return true;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    sort(arr1, arr1 + n);

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
        if (binarySearch(arr1, n, arr2[i]))
            cout << "1\n";
        else
            cout << "0\n";
    }

    return 0;
}
