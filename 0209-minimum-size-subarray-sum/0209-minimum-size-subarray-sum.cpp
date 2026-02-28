class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sum =0;
        int n=nums.size();
        int minLen =INT_MAX;
        while(j<n)
        {
            sum += nums[j];
            // apni window ko chota krr rhe hain hmm
            while (sum >= target)
            {
                sum -= nums[i];
                minLen =  min(minLen ,j-i+1);
                i++ ;
            }
            
            j++;
        }
        return minLen == INT_MAX ? 0 : minLen ;
    }
};