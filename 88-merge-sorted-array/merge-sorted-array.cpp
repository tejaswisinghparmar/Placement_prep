class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a=m;
        for(int i: nums2){
            nums1[a]=i;
            if(a<m+n-1) a++;
        }
        sort(nums1.begin(),nums1.end());
    }
};