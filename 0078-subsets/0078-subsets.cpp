class Solution {
public:
    vector<vector<int>> result;

    void solve(vector<int>& nums, int idx, vector<int>& temp) {
        if(idx >= nums.size()) {
            result.push_back(temp);
            return;
        }

        // Include current element
        temp.push_back(nums[idx]);
        solve(nums, idx+1, temp);

        // Backtrack
        temp.pop_back();

        // Exclude current element
        solve(nums, idx+1, temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        solve(nums, 0, temp);
        return result;
    }
};