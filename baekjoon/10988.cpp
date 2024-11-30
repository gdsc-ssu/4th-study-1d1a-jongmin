#include <bits/stdc++.h>
using namespace std;

string word;

int func(int len) {
    for (int i = 0; i <= len / 2; i++) {
        if (word[i] != word[len-i-1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> word;

    int len = word.length();

    cout << func(len) << '\n';
    
    return 0;
}