class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //tushar
        vector<vector<int>> ans ;
        int n = nums.size();
        sort(nums.begin(),nums.end()) ;

        for( int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue ; // skip condition for i

            int l=i+1 , r=n-1;

            while(l<r){
                int sum = nums[i]+nums[l]+nums[r] ;
                if(sum == 0){       // if we found a triplet print and alaop check others also
                        vector<int> temp ={nums[i] , nums[l] , nums[r]} ;
                        ans.push_back(temp) ;

                        while (l<r && nums[l]== nums[l+1]) l++;
                        while (l<r && nums[r]== nums[r-1]) r--;

                        l++;
                        r--;
                }
                else if(sum <0){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return ans;
    }
    
};