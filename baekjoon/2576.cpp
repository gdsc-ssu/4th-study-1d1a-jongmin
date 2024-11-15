#include <bits/stdc++.h>
using namespace std;
#define MAX 7

int arr[MAX];
int sum = 0, cnt = 0, minimum = INT_MAX;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 0; i < MAX; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < MAX; i++) {
        if (arr[i] % 2 == 1) {
            sum += arr[i];
            cnt++;
            minimum = min(minimum, arr[i]);
        } 
    }

    if (cnt == 0) {
        cout << -1 << '\n';
    } else {
        cout << sum << '\n';
        cout << minimum << '\n';
    }

    return 0;
}
