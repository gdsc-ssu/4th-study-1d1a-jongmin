#include <bits/stdc++.h>
using namespace std;

#define MAX 100000

int res = 0, n, cur;
int dp[MAX], arr[MAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> dp[i];
        arr[i] = dp[i];
    }

    res = dp[0];
    cur = dp[0]; 

    for (int i = 1; i < n; i++) {
        cur = max(dp[i], cur + dp[i]);
        res = max(res, cur);
    }
    
    cout << res << '\n';
    
    return 0;
}