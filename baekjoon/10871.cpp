#include <bits/stdc++.h>
using namespace std;
#define MAX 10001

int n, x;
int arr[MAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> x;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < x) {
            cout << arr[i] << ' ';
        }
    }
    cout << '\n';
    
    return 0;
}