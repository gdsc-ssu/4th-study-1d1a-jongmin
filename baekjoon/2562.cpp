#include <bits/stdc++.h>
using namespace std;
#define MAX 10

int arr[MAX], maximum = INT_MIN;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 1; i < MAX; i++) {
        cin >> arr[i];
        if (maximum < arr[i]) {
            maximum = arr[i];
        }
    }

    cout << maximum << '\n';

    for (int i = 1; i < MAX; i++) {
        if (arr[i] == maximum) {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}