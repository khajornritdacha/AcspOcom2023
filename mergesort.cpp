#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
int n;

void mergesort(int l, int r) {
    if (r-l+1 <= 1) return;
    int mid = (l+r)/2;
    mergesort(l, mid);
    mergesort(mid + 1, r);

    int i = l, j = mid + 1, k = 0;
    int tmp[r-l+1] = {};
    while (i <= mid and j <= r) {
        if (arr[i] < arr[j]) {
            tmp[k++] = arr[i++];
        } else {
            tmp[k++] = arr[j++];
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
}

int main() {
    cin >> n;
    arr.resize(n);
    for (int &x : arr) cin >> x;

    mergesort(0, n-1);

    for (int x : arr) cout << x << " ";
    cout << "\n";
}