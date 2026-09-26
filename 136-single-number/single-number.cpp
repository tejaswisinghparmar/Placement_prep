class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i : nums){
            freq[i]++;
        }
        for(auto x: freq){
            if(x.second ==1){
                return x.first;
            }
        }

    return 0;
        
    }
};