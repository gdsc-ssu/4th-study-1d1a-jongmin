#include <bits/stdc++.h>
using namespace std;

#define MAX 16

int n, T[MAX], P[MAX], dp[MAX]; // i번째 인덱스(날짜) 에서 최대 이익

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> T[i] >> P[i];
    }

    int profit = 0;
    for (int i = 1; i <= n+1; i++) {
        dp[i] = max(profit, dp[i]);
        if (T[i] + i <= n+1) {
            dp[T[i]+i] = max(dp[T[i]+i], P[i]+dp[i]);
        }
        profit = max(profit, dp[i]);
    }
    
    cout << profit << '\n';

    return 0;
}