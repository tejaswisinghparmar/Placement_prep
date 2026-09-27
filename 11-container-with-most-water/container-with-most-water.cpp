class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int curr_vol=0;
        int max_vol=0;

        while(l<r){
            curr_vol=min(height[l],height[r]) * (r-l);
            max_vol=max(curr_vol,max_vol);
            if(height[l]<height[r]) l++;
            else r--;
        }
        return max_vol;
    }
};