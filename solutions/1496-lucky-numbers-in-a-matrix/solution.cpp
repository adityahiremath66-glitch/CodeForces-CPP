class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> ans;

        for(int i=0; i<m; i++) {
            int rowMin = INT_MAX;
            int colIdx = -1;
            for(int j=0; j<n; j++){
                if(matrix[i][j] < rowMin) {
                    rowMin = matrix[i][j];
                    colIdx = j;
                }
            }
            bool isLucky = true;
            for (int k=0; k<m; k++) {
                if(matrix[k][colIdx] > rowMin) {
                    isLucky = false;
                    break;
                }
            }
            if(isLucky){
                ans.push_back(rowMin);
            }
        }
    return ans;
    }
};
