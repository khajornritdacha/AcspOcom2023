#include <bits/stdc++.h>
using namespace std;

int n, k;
vector <int> x;

bool valid(long long mid) {
    long long sum = 0;
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        if (x[i] > mid) return false;

        if (sum + x[i] > mid) {
            sum = x[i];
            cnt++;
        }
        else {
            sum += x[i];
        }
    }
    if (cnt <= k) return true;
    return false;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> n >> k;

    x.resize(n);
    for (auto &a : x) cin >> a;

    long long l = 1, r = 2e14, ans = -1;
    while (l <= r) {
        long long mid = (l + r) / 2;

        if (valid(mid) == true) {
            r = mid - 1;
            // ans = min(ans, mid); // ไม่ต้องเขียน min ก็ได้
            ans = mid;
        }
        else {
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}