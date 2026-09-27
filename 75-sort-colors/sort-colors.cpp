class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,curr=0,r=nums.size()-1;

        while(curr<=r){
            if(nums[curr]==0){
                int temp=nums[l];
                nums[l]=nums[curr];
                nums[curr]=temp;
                l++;curr++;
            }
            else if (nums[curr]==1){
                curr++;
                continue;
            }
            else{
                int temp=nums[r];
                nums[r]=nums[curr];
                nums[curr]=temp;
                r--;
            }
        }
    }
};