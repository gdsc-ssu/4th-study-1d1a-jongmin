#include <bits/stdc++.h>
using namespace std;
#define MAX 9

int n, m;
int arr[MAX];
bool visited[MAX];

void dfs(int num, int count) {
    if (count > m) {
        for (int i = 1; i <= m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = num; i <= n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            arr[count] = i;
            dfs(i+1, count+1);
            visited[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    fill(visited, visited+n, false);

    cin >> n >> m;

    dfs(1, 1);

    return 0;
}