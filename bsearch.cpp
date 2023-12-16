#include <bits/stdc++.h>
using namespace std;

int b_search(vector<int> &vec, int x) {
    return 0;
}

int main() {
    int n, Q; cin >> n >> Q; 
    vector<int> vec(n);
    for (int &x : vec) cin >> x;

    sort(vec.begin(), vec.end());

    for (int q = 0; q < Q; q++) {
        int x; cin >> x;
        int k = b_search(vec, x);
        cout << k << "\n";
    }
}