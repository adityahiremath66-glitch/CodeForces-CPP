class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int n = grid.size();
    map<int,int> mp;
        for(int i=0; i<n; i++){
            for(int j=0; j<grid[i].size(); j++){
                mp[grid[i][j]]++;
            }
        }
    int a,b=0;
    int i = 1;
        for(auto x : mp){
            if(x.second >= 2){
                a = x.first;
            }
        }
        for(auto x : mp){
            if(x.first != i){
                b = i;
                break;
            }
            i++;
        }
        if(b == 0){
            b = i;
        }
        return {a,b};
    }
};
