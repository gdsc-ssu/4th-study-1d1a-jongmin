#include <bits/stdc++.h>
using namespace std;

stack<int> st;
int N, num;
string cmd;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> num;
            st.push(num);
        } else if (cmd == "pop") {
            if (st.empty()){
                cout << -1 << '\n';
            } else {
                cout << st.top() << '\n';
                st.pop();
            }
        } else if (cmd == "size") {
            cout << st.size() << '\n';
        } else if (cmd == "empty") {
            if (st.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if (cmd == "top") {
            if (st.empty()) {
                cout << -1 << '\n';
            } else {
                cout << st.top() << '\n';
            }
        } 
    }

    return 0;
}