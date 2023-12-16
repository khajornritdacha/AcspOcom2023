#include <bits/stdc++.h>
using namespace std;

bool check[15];
vector <int> p;

int n;
void solve(int s) { // s = ขนาด permutation ปัจจุบัน
    if (s == n) {
        // do something
        for (auto &v : p) cout << v << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (check[i] == false) {
            check[i] = true;
            p.push_back(i);
            solve(s + 1);
            p.pop_back();
            check[i] = false;
        }
    }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> n;

    solve(0);
    return 0;
}