#include <bits/stdc++.h>
using namespace std;

int A, B, C;
int arr[10], d = 10;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> A >> B >> C;

    fill(arr, arr+10, 0);

    int res = A * B * C;
    int i = 0;
    while (res != 0) {
        i = res % d;
        res /= d;
        arr[i]++;
    }

    for (int i = 0 ; i < 10; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}