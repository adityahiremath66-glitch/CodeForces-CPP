class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    int n = accounts.size(); 
    int max_wealth = 0;
    vector<int> x;
        for(int i=0; i<n; i++){
            int wealth = 0;
            for(int j=0; j<accounts[i].size(); j++){
                wealth += accounts[i][j];
            }
        x.push_back(wealth);
        } 
        for(int i=0; i<x.size(); i++){
            max_wealth = max(x[i],max_wealth);
        }
        return max_wealth;
    }
};
