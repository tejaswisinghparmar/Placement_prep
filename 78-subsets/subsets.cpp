class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;

        ans.push_back({});

        for(int x : nums) {

            int currentSize = ans.size();

            for(int j = 0; j < currentSize; j++) {

                vector<int> temp = ans[j];

                temp.push_back(x);

                ans.push_back(temp);
            }
        }
        return ans;
    }
};