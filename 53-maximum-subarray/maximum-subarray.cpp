class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum=nums[0], max_sum=nums[0];
        for(int j = 1; j < nums.size(); j++) {
            int i = nums[j];

            curr_sum = max(i, curr_sum + i);
            max_sum = max(curr_sum, max_sum);
        }
        return max_sum;
    }
};