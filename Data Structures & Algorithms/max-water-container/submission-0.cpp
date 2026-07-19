class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left =0 ;
        int right = n-1;
        int water = 0;
        int area =0 ;
        while(right>left){
            water = min(heights[left],heights[right])*(right-left);
            area= max(area , water);
            (heights[left]<heights[right])?left++:right--;



           


        }
        return area;
    }
};
