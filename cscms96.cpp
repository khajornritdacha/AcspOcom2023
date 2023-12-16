#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, q;
    cin >> n >> q;

    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    while (q--) {
        int x;
        cin >> x;

        bool flag = false;
        map <int, bool> mp;
        for (int i = 0; i < n; i++) {
            // for (int j = i + 1; j < n; j++) {
            //     if (a[i] + a[j] == x) flag = true;
            // }
            if (mp.find(x - a[i]) != mp.end()) flag = true;
            mp[a[i]] = true;
        }

        if (flag == true) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
    return 0;
}