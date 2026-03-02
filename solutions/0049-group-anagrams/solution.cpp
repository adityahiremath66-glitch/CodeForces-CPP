class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    int n = strs.size();
    map<string,vector<int>> mp;
    vector<vector<string>> ans;    
        for(int i=0; i<n; i++){
            string t = strs[i];
            sort(t.begin(),t.end());
            mp[t].push_back(i);
        }
        for(auto x : mp){
            vector<string> t;
            for(auto y : x.second){
                t.push_back(strs[y]);
            }
            ans.push_back(t);
        }
        
        return ans;
    }
};
