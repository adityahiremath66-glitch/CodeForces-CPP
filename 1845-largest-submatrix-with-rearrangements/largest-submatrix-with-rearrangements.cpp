class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& mt) {
    int n = mt.size();
    int m = mt[0].size();
    int ans = 0;
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                if(mt[i][j]){
                    mt[i][j] += mt[i-1][j];
                }
            }
        }
        for(int i=0; i<n; i++){
            sort(mt[i].begin(),mt[i].end(),greater<int>());
            for(int j=0; j<m; j++){
                int ht = mt[i][j];
                int wd = j+1;
                ans = max(ans,ht*wd);
            }
        }
        return ans;
    }
};