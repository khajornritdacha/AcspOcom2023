#include <bits/stdc++.h> // include library ทั้งหมดมาให้
// #include <iostream>
// #include <algorithm> // sort
// #include <vector> // vector <int> v;
using namespace std;

int main() {
    // ทำให้ cin ทำงานเร็วขึ้น
    cin.tie(nullptr)->sync_with_stdio(false);

    // เขียนแบบนี้ก็ได้เหมือนกัน (จำสักวิธี)
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int n;
    cin >> n;

    vector <int> a; // {2, 4, 1, 5, 3}
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        a.push_back(x);
    }

    // vector <int> a(n, -69);
    // for (auto v : a) cout << v << ' ';
    // int a[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }

    // sort(a.begin(), a.end());
    sort(a.rbegin(), a.rend()); // เรียงจากมากไปน้อย
    // sort(a.begin(), a.end(), greater <int> ()); // เรียงจากมากไปน้อย

    // for (int i = n - 1; i >= 0; i--) {
    //     cout << a[i] << '\n';
    // }
    // for (int i = 0; i < a.size(); i++) {
    //     cout << a[i] << '\n';
    // }

    // for (auto &v : a) { // ใส่ & ด้านหน้าจะทำให้แก้ค่า v ได้
    //     v++;
    // }
    for (auto v : a) {
        // cout << v << endl; // ช้า
        cout << v << '\n';
    }
    return 0;
}