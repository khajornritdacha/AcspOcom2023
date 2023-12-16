class Solution {
public:
    vector<vector<int>> res;

    void solve(vector<int> &nums, vector<bool> &used, vector<int> &cur) {
        if (cur.size() == nums.size()) {
            res.push_back(cur);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;
            used[i] = true;
            cur.push_back(nums[i]);
            solve(nums, used, cur);
            used[i] = false;
            cur.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size());
        vector<int> cur;
        solve(nums, used, cur);
        return res;
    }
};