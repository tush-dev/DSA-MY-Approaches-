class Solution {
public:
//tushar
    double findMaxAverage(vector<int>& nums, int k) {
        
        int i=0;
        int j=0;
        int sum = 0;
        int n= nums.size() ;
        int mx = INT_MIN ;
        double avg ;
        while (j<n){
            sum = sum + nums[j] ;

            if(j-i+1 <k){
                j++;
            }

            else if(j-i+1 == k){
            mx = max(mx, sum) ;
            sum = sum - nums[i] ;
            i++;
            j++ ;
            }
        }
        avg = (double)mx / k ;
        return avg;
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
