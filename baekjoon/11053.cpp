#include <bits/stdc++.h>
using namespace std;

#define MAX 1001

int N, len = 0;
int arr[MAX], dp[MAX]; // dp[i] = j <- i번째 인덱스까지의 가장 긴 증가하는 수열의 길이

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        dp[i] = 1;
    }

    len = 1; // 현재 가장 긴 증가하는 부분 수열의 개수

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        len = max(len, dp[i]);
    }

    cout << len << '\n';

    return 0;
}