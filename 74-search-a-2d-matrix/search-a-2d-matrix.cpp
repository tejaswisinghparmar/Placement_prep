class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0, r=matrix.size()-1, ele=matrix[0].size()-1;
        // int mid=l+(r-l)/2;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(matrix[mid][0]>target ){
                r=mid-1;
            }
            else if(matrix[mid][ele]<target){
                l=mid+1;
            }
            else{
                int low=0, high=matrix[mid].size()-1, center;
                while(low<=high){
                    center=low+(high-low)/2;
                    if(matrix[mid][center]<target){
                        low=center+1;
                    }
                    else if(matrix[mid][center]>target){
                        high=center-1;
                    }
                    else{
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
        
    }
};