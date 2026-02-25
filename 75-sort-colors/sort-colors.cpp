class Solution {
public:
//first approach--Tushar
    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
          else  if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
        }
    }
};
//second approach --Tushar
/**class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int left = 0;

        // First pass → move 0s to front
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                swap(nums[i], nums[left]);
                left++;
            }
        }

        int right = n - 1;

        // Second pass → move 2s to back
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] == 2) {
                swap(nums[i], nums[right]);
                right--;
            }
        }
    }
};**/