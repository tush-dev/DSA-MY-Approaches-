class Solution {
public:
//tushar
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
       int i=0;
       int j=0; 
       int count =0;
       int product =1;
        int n=nums.size();
       while(j<n)
        {
            product *= nums[j];

            while(product >= k)
            {
                product /= nums[i];
                i++;
            }
            count += (j-i+1); //Number of subarrays ending at j
            j++;
        }
        return count;
    }
};