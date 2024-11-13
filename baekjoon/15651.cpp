#include <bits/stdc++.h>
using namespace std;
#define MAX 9

int n, m;
int arr[MAX];
bool visited[MAX];

void dfs(int count) {
    if (count > m) {
        for (int i = 1; i <= m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++) {
        visited[i] = true;
        arr[count] = i;
        dfs(count+1);
        visited[i] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    fill(visited, visited+n, false);

    cin >> n >> m;

    dfs(1);

    return 0;
}