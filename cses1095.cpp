#include <bits/stdc++.h>
// #define int long long
using namespace std;

const int MOD = 1e9 + 7;

int solve(int a, int b) {
    if (b == 0) return 1;

    int c = solve(a, b / 2); // O(log b)
    c = 1ll * c * c % MOD;
    if (b % 2 == 1) c = 1ll * c * a % MOD;
    return c;
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;

        cout << solve(a, b) << '\n';
    }
    return 0;
}