class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        for(int i: nums1){
            int next_greater=i;
            bool flag=false;
            bool found=false;
            for(int j=0;j<nums2.size();j++){
                if(flag==true){
                    if(nums2[j]>i){
                        ans.push_back(nums2[j]);
                        found=true;
                        break;
                    }
                }
                if(nums2[j]==i){
                    flag=true;
                }
            }
            if(!found){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};