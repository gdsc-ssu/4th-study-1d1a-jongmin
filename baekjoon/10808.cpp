#include <bits/stdc++.h>
using namespace std;

string word;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> word;

    for (char a = 'a'; a <= 'z'; a++) {
        int cnt = 0;
        for (auto c : word) {
            if (a == c) cnt++;
        }
        cout << cnt << ' ';
    }

    return 0;
}