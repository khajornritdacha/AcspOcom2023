#include <bits/stdc++.h>
using namespace std;

vector <int> a;

long long inv(int l, int r) {
    if (l == r) return 0;

    int mid = (l + r) / 2;
    long long res = 0;
    res += inv(l, mid);
    res += inv(mid + 1, r);

    vector <int> L, R;
    for (int i = l; i <= mid; i++) L.push_back(a[i]);
    for (int i = mid + 1; i <= r; i++) R.push_back(a[i]);

    int i = 0, j = 0, k = l;
    while (i < L.size() and j < R.size()) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
            k++;
        }
        else {
            res += L.size() - i;
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
    return res;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        a.resize(n);
        for (auto &x : a) cin >> x;

        cout << inv(0, n - 1) << '\n';
    }
    return 0;
}