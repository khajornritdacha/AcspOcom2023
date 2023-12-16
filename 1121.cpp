#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int q;
    cin >> q;

    while (q--) {
        string s;
        cin >> s;

        stack <char> stk;
        for (auto v : s) {
            if (v == '(' or v == '[' or v == '{') stk.push(v);
            else if (!stk.empty()) {
                if (stk.top() == '(' and v == ')') stk.pop();
                else if (stk.top() == '[' and v == ']') stk.pop();
                else if (stk.top() == '{' and v == '}') stk.pop();
                else stk.push(v);
            }
            else stk.push(v);
        }

        if (stk.empty()) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}