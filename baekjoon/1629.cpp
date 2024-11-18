#include <bits/stdc++.h>
using namespace std;

int A, B, C;

long long power(int B) {
    if (B == 0) return 1;
    if (B == 1) return A % C;

    if (B % 2 == 0) return power(B/2) * power(B/2) % C;
    return power(B/2) % C * power(B/2) % C * A % C;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> A >> B >> C;

    cout << power(B) << '\n';

    return 0;
}