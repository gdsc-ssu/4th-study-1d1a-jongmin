#include <bits/stdc++.h>
using namespace std;
#define MAX 8

int n, m;
int arr[MAX];
bool visited[MAX];

void func(int num, int length) {
    if (length == m) {
        for (int i = 0; i < length; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = num; i <= n; i++) {
        arr[length] = i;
        visited[i] = true;
        func(i, length + 1);
        visited[i] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    func(1, 0);

    return 0;
}