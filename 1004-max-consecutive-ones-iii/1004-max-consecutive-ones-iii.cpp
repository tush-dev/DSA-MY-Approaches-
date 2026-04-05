class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zerocount = 0;   // count of zeros in current window
        int i = 0;           // left pointer of window
        int j = 0;           // right pointer of window
        int mx = 0;          // stores maximum length
        int n = nums.size();

        // expand the window using j
        while (j < n) {

            // if current element is 0, increment zero count
            if (nums[j] == 0)
                zerocount++;

            // if zero count exceeds k, shrink window from left
            while (zerocount > k) {
                // if the element going out is 0, reduce zero count
                if (nums[i] == 0)
                    zerocount--;
                
                i++;  // move left pointer forward
            }

            // update maximum window size
            // window [i, j] has at most k zeros
            mx = max(mx, j - i + 1);

            j++;  // move right pointer forward (expand window)
        }

        return mx;
    }
};