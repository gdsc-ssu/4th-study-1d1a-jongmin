#include <bits/stdc++.h>
using namespace std;
#define MAX 100001

int N, A[MAX], M, arr[MAX];

void input() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    cin >> M;
    for (int i = 1; i <= M; i++) {
        cin >> arr[i];
    }
    sort(A+1, A+N+1);
}

bool binarySearch(int target) {
    int left = 1;
    int right = N;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (A[mid] == target) return true;
        else if (A[mid] > target) right = mid - 1;
        else left = mid + 1;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    input();

    for (int i = 1; i <= M; i++) {
        if (binarySearch(arr[i])) {
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }

    return 0;
}