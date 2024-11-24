#include <bits/stdc++.h>
using namespace std;

int game[4], cnt;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 0; i < 3; i++) {
        cnt = 0;
        for (int j = 0; j < 4; j++) {
            cin >> game[i];
            if(game[i] == 0) {
                cnt++;
            }
        }
        if (cnt == 0) {
            cout << 'E' << '\n';
        } else if (cnt == 1) {
            cout << 'A' << '\n';
        } else if (cnt == 2) {
            cout << 'B' << '\n';
        } else if (cnt == 3) {
            cout << 'C' << '\n';
        } else if (cnt == 4) {
            cout << 'D' << '\n';
        }
    }

    return 0;
}