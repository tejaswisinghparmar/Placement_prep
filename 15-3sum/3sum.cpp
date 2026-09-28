class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i=0;i<nums.size()-2;i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int r=nums.size()-1;
            int l=i+1;

            while(l<r){
                
                int sum=nums[l]+nums[r]+nums[i];
                if(sum==0){
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) l++;
                    while (l < r && nums[r] == nums[r + 1]) r--;
                }
                else if(sum<0){
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