class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int left=0,right=matrix[0].size()-1;
        int top=0,bottom=matrix.size()-1;

        while(top<=bottom && left<=right){
            for(int i=left; i<right+1; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top; i<bottom+1; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(bottom>=top && left <= right){
                for(int i=right; i>left-1; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
                for(int i = bottom; i >= top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;                
            }
        }
        return ans;
    }
};