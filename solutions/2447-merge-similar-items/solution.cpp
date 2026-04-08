class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& it1, vector<vector<int>>& it2) {
    int n = it1.size();
    int m = it2.size();
    map<int,int> mp;
    vector<vector<int>> ans;
        for(int i=0; i<n; i++){
            mp[it1[i][0]] = it1[i][1];
        }
        for(int i=0; i<m; i++){
            mp[it2[i][0]] += it2[i][1];
        }
        for(auto x : mp){
            ans.push_back({x.first,x.second});
        }
    return ans;
    }
};
