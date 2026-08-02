class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int tar) {
    int n = m.size();
    bool check = 0;
        for(int i=0; i<n; i++){
            if(m[i][0] > tar){
                break;
            }
            if(check){
                break;
            }
            check = binary_search(m[i].begin(),m[i].end(),tar);
        }
        return check;
    }
};