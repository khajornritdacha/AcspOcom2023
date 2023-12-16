#include <bits/stdc++.h>
using namespace std;

void combi(int n, int k, int prev, vector<int> &cur) {
    if (cur.size() == k) {
        for (int x : cur) cout << x << " ";
        cout << "\n";
        return;
    }
    for (int i = prev + 1; i <= n; i++) {
        cur.push_back(i);
        combi(n, k, i, cur);
        cur.pop_back();
    }
}

int main() {
    int n, k; cin >> n >> k;
    vector<int> cur;
    combi(n, k, 0, cur);
}