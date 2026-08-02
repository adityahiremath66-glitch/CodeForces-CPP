class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
    int m = mat.size();
    int n = mat[0].size();
    int row = 0,col = n-1;
        while(row < m && col >= 0){
            if(mat[row][col] == tar){
                return 1;
            }
            else if(mat[row][col] > tar){
                col--;
            }
            else{
                row++;
            }
        }
        return 0;
    }
};