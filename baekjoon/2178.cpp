#include <bits/stdc++.h>
using namespace std;
#define MAX 101

int n, m;
string board[MAX];
int dist[MAX][MAX];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push({x, y});
    dist[x][y] = 1;  // 시작 위치의 거리를 1로 설정

    while (!q.empty()) {
        int X = q.front().first;
        int Y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = X + dx[i];
            int ny = Y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
                continue;
            }
            if (dist[nx][ny] == -1 && board[nx][ny] == '1') {  // 방문하지 않았고 길이 있는 경우
                dist[nx][ny] = dist[X][Y] + 1;
                q.push({nx, ny});
            }
        }
    }
    return dist[n-1][m-1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }
    for (int i = 0; i < n; i++) {
        fill(dist[i], dist[i] + m, -1);
    }

    cout << bfs(0, 0) << '\n';

    return 0;
}