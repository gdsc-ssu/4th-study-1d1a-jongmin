#include <bits/stdc++.h>
using namespace std;

#define MAX 1001

int N, res = 0;
int dp[MAX], arr[MAX]; // dp[k] = n -> k번째 인덱스까지 가장 큰 부분 수열의 합은 n

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> dp[i];
        arr[i] = dp[i];
    }
    
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i]) {
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }
        }
    }

    res = dp[0];

    for (int i = 1; i < N; i++) {
        if (dp[i] > res) {
            res = dp[i];
        }
    }

    cout << res << '\n';

    return 0;
}

