class Solution {
public:
    vector<vector<int>> res;
    void solve(int n, int k, int prev, vector<int> &tmp) {
        if (tmp.size() == k) {
            res.push_back(tmp);
            return;
        }
        for (int j = prev + 1; j <= n; j++) {
            tmp.push_back(j);
            solve(n, k, j, tmp);
            tmp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> tmp;
        solve(n, k, 0, tmp);
        return res;
    }
};