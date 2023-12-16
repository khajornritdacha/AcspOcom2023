#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
int n;

long long mergesort(int l, int r) {
    if (r-l+1 <= 1) return 0;
    int mid = (l+r)/2;
    long long res = mergesort(l, mid) + mergesort(mid + 1, r);

    int i = l, j = mid + 1, k = 0;
    int tmp[r-l+1] = {};
    while (i <= mid and j <= r) {
        if (arr[j] < arr[i]) {
            tmp[k++] = arr[j++];
            res += mid-i+1;
        } else {
            tmp[k++] = arr[i++];
        }
    }

    while (i <= mid) {
        tmp[k++] = arr[i++];
    }
    
    while (j <= r) {
        tmp[k++] = arr[j++];
    }

    for (i = l, k = 0; i <= r; i++, k++) {
        arr[i] = tmp[k];
    }
    return res;
}

int main() {
    cin >> n;
    arr.resize(n);
    for (int &x : arr) cin >> x;

    cout << "Inv: " << mergesort(0, n-1) << "\n";

    for (int x : arr) cout << x << " ";
    cout << "\n";
}