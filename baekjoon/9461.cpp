#include <iostream>
using namespace std;

#define MAX 101

int t, n;

long arr[MAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t; 

    // arr[n] = arr[n-2] + arr[n-3] if n >= 4

    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;

    for (int i = 4; i < MAX; i++) {
        arr[i] = arr[i-2] + arr[i-3];
    }

    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << arr[n] << '\n';
    }

    return 0;
}