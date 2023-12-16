#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    long long n;
    cin >> n;

    long long l = 1, r = 1e17, ans;
    while (l <= r) {
        long long mid = (l + r) / 2;

        long long f = 23 * mid + 98 * (mid / 12);
        if (f >= n) {
            r = mid - 1;
            ans = mid;
        }
        else {
            l = mid + 1;
        }
    }
    cout << 7 * ans;
    return 0;
}