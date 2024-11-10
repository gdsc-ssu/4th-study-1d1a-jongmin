#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000000

int n;
int arr[101][10]; // arr[i][j] <= i번째 길이에 j가 왔을 때 가능한 계단 수

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for (int i = 1; i <= 9; i++) {
        arr[1][i] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= 9; j++) {
            if (j == 0) {
                arr[i][j] = arr[i-1][1] % MOD;
            } else if (j == 9) {
                arr[i][j] = arr[i-1][8] % MOD;
            } else {
                arr[i][j] = (arr[i-1][j-1] + arr[i-1][j+1]) % MOD;
            }
        }
    }

    int res = 0;
    for (int i = 0; i <= 9; i++) {
        res = (res + arr[n][i]) % MOD;
    }
    cout << res << '\n';
    
    return 0;
}