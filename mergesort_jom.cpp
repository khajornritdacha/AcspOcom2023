#include <bits/stdc++.h>
using namespace std;

vector <int> a;

void solve(int l, int r) {
    if (l == r) return;

    int mid = (l + r) / 2;
    solve(l, mid);
    solve(mid + 1, r);

    vector <int> L, R;
    for (int i = l; i <= mid; i++) L.push_back(a[i]);
    for (int i = mid + 1; i <= r; i++) R.push_back(a[i]);

    int i = 0, j = 0, k = l;
    while (i < L.size() and j < R.size()) {
        if (L[i] < R[j]) {
            a[k] = L[i];
            i++;
            k++;
        }
        else {
            a[k] = R[j];
            j++;
            k++;
        }
    }
    while (i < L.size()) {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < R.size()) {
        a[k] = R[j];
        j++;
        k++;
    }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    a.resize(n);
    for (auto &x : a) cin >> x;

    solve(0, n - 1);

    for (auto &x : a) cout << x << ' ';
    return 0;
}