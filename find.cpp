#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};

    // vector<int>::iterator it = find(v.begin(), v.end(), 7);
    auto it = find(v.begin(), v.end(), 3);

    if (it == v.end()) {
        // not found
        cout << "Not found\n";
    } else {
        // found
        cout << "Found at index:" << it-v.begin() << "\n";
    }
}
