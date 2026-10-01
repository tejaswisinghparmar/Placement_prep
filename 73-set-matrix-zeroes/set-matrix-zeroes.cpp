class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        vector<vector<int>> zero;
        int row=matrix.size();
        int col=matrix[0].size();

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    zero.push_back({i,j});
                }
            }
        }
        for(auto z:zero){
            for(int j = 0; j < col; j++) {
                matrix[z[0]][j] = 0;
            }
            for(int i=0;i<row;i++){
                matrix[i][z[1]] =0;
            }
        }
    }
};