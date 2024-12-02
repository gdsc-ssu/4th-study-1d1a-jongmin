#include <bits/stdc++.h>
using namespace std;

int N, K;
int arr[12];
int sum;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = N-1; i >= 0; i--) {
        sum += K / arr[i];
        K %= arr[i];
    }

    cout << sum << '\n';

    return 0;
}