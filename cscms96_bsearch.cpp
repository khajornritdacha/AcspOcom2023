#include <bits/stdc++.h>
using namespace std;

int b_search(int l, int val, vector<int> &arr) {
    int r = (int)arr.size() - 1;
    while (l <= r) {
        int mid = (l+r)/2;
        if (arr[mid] == val) {
            return mid;
        } else if (arr[mid] > val) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}


int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, Q; cin >> n >> Q;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    sort(arr.begin(), arr.end());

    for (int q = 0; q < Q; q++) {
        int k; cin >> k;
        bool found = false;
        for (int i = 0; i < n; i++) {
            int res = b_search(i + 1, k - arr[i], arr);
            if (res != -1) {
                cout << "Yes\n";
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "No\n";
        }
    }
}