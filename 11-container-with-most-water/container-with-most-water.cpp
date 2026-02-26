class Solution {
public:
//tushar
    int maxArea(vector<int>& height) {
        int left =0;
        int right = height.size() -1;
        int area =0;
        while(left < right)
        {
            int maxarea =(min(height[left],height[right]))*(right-left) ;
            area = max(area, maxarea) ;
            if(height[left]<height[right]){
                left++;}
                else{ right--;
            }
        }
        return area;
    }
};