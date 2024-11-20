#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[10];
bool visited[10];

void func(int length) {
    if (length == M) {
        for (int i = 0; i < length; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            arr[length] = i;
            visited[i] = true;
            func(length + 1);
            visited[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;

    func(0);

    return 0;
}