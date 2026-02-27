class Solution {
public:
//tushar
    double findMaxAverage(vector<int>& nums, int k) {
        
        double windowSum=0;
        for(int i=0; i<k;i++)
        {
             windowSum += nums[i];
        }
        double maxSum= windowSum;
        for(int j=k; j<nums.size();j++)
        {
             windowSum += nums[j];
             windowSum -= nums[j-k];
             maxSum = max(windowSum, maxSum);
        }
        return maxSum/k ;
        
    }
};

/*
Initialize the first window: Compute the sum of the first k elements (window_sum).
Slide the window across the array:
For each new element, add it to window_sum and remove the leftmost element of the previous window.
This ensures that we maintain a fixed window size of k without recalculating the sum from scratch.
Update max_sum whenever a new higher sum is found.
Return the maximum average: Divide max_sum by k to get the highest possible average.
This approach ensures that each element is processed only once, making it highly efficient
*/
