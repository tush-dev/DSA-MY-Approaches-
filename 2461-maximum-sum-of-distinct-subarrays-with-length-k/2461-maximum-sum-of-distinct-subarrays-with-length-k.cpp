class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;

        long long sum = 0;
        long long mx = 0;

        int i = 0;

        for (int j = 0; j < n; j++) {
            sum += nums[j];
            mp[nums[j]]++;

            // If duplicate → shrink window
            while (mp[nums[j]] > 1) {
                mp[nums[i]]--;
                sum -= nums[i];
                i++;
            }

            // Check window size = k
            if (j - i + 1 == k) {
                mx = max(mx, sum);

                // slide window
                mp[nums[i]]--;
                sum -= nums[i];
                i++;
            }
        }

        return mx;
    }
};