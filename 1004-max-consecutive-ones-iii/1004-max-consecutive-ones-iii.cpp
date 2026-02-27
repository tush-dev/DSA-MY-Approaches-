// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int maxLen = 0;

//         for (int i = 0; i < (int)nums.size(); i++) {
//             int zeroCount = 0;

//             for (int j = i; j < (int)nums.size(); j++) {
//                 if (nums[j] == 0) zeroCount++;

//                 if (zeroCount > k) break;

//                 maxLen = max(maxLen, j - i + 1);
//             }
//         }

//         return maxLen;
//     }
// };

// sliding window 
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zerocount = 0;
        int start = 0;
        int maxCount = 0;

        for (int end = 0; end < nums.size(); end++) {

            if (nums[end] == 0)
                zerocount++;

            while (zerocount > k) {
                if (nums[start] == 0)
                    zerocount--;
                
                start++;   // ✅ always move start
            }

            maxCount = max(maxCount, end - start + 1);
        }

        return maxCount;
    }
};

