#include <bits/stdc++.h>
using namespace std;
#define MAX 10

int N, M;
int arr[MAX], arrN[MAX];
bool visited[MAX];

void func(int length) {
    if (length == M) {
        for (int i = 0; i < M; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            arr[length] = arrN[i];
            func(length + 1);
            visited[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> arrN[i];
    }

    sort(arrN, arrN + N);

    func(0);

    return 0;
}