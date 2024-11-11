#include <bits/stdc++.h>
using namespace std;

int n, m;
int canvas[500][500];
bool visited[500][500];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int bfs(int x, int y) {
    queue<pair<int, int> > q;
    q.push({x, y});
    visited[x][y] = true;
    int area = 1;

    while (!q.empty()) {
        int curr_x = q.front().first;
        int curr_y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nx = curr_x + dx[i];
            int ny = curr_y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (!visited[nx][ny] && canvas[nx][ny] == 1) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                    area++;
                }
            }
        }
    }
    return area;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> canvas[i][j];
        }
    }

    int numberOfPictures = 0;
    int maxArea = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (canvas[i][j] == 1 && !visited[i][j]) {
                numberOfPictures++;
                maxArea = max(maxArea, bfs(i, j));
            }
        }
    }

    cout << numberOfPictures << "\n";
    cout << maxArea << "\n";

    return 0;
}
