// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         vector<int> ans(nums.size());  // Fix: int ans[] → vector<int> ans(nums.size())

//         for (int i = 0; i < nums.size(); i++)
//         {
//             ans[i] = nums[i] * nums[i];  // Fix: nums[j] → nums[i]
//         }

//         sort(ans.begin(), ans.end());  // Fix: ans.sort() → sort(ans.begin(), ans.end())

//         return ans;
//     }
// };

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;        // Fix: missing -1
        int k = nums.size() - 1;        // Fix: missing -1
        vector<int> ans(nums.size());   // Fix: must be pre-sized

        while (i <= j)                  // Fix: i<j → i<=j
        {
            if (abs(nums[i]) > abs(nums[j]))  // Fix: Math.abs() → abs()
            {
                ans[k] = nums[i] * nums[i];
                i++;
            }
            else
            {
                ans[k] = nums[j] * nums[j];
                j--;
            }
            k--;
        }
        return ans;
    }
};              
 