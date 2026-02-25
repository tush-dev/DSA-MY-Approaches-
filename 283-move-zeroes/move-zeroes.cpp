class Solution {
public://tushar
    void moveZeroes(vector<int>& nums) {
        int l=0;
        int r=0;
        for(r=0;r<nums.size();r++){
            if(nums[r]!=0){
                swap(nums[l],nums[r]);
                l++;
            }
        }
    }     
};
/*while(l<=r){
    if(nums[l]==0){
        swap (nums[l], nums[r]);
        l++,r--;
        }
        else{
            l++;
        }

    }
}*/