#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector <int> a(n);
    for (auto &x : a) cin >> x;

    int x;
    cin >> x;

    sort(a.begin(), a.end());

    bool flag = false;
    // for (int i = 0; i < n; i++) {
    //     if (a[i] == x) {
    //         flag = true;
    //     }
    // }

    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;

        if (a[mid] < x) {
            l = mid + 1;
        }
        else if (a[mid] > x) {
            r = mid - 1;
        }
        else if (a[mid] == x) {
            flag = true;
            break;
        }
    }

    if (flag == true) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}