#include <bits/stdc++.h>
using namespace std;

unsigned long long A, B;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> A >> B;

    if (A > B) {
        swap(A, B);
    }

    unsigned long long res = B - A - 1;

    if (A == B) {
        cout << 0 << '\n';
    } else {
        cout << res << '\n';
        for (unsigned long long i = A+1; i < B; i++) {
            cout << i << ' ';
        }
    }

    cout << '\n';

    return 0;
}