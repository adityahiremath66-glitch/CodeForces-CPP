class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    int n = s.length();
    map<int,char> mp;
    string ans;
        for(int i=0; i<n; i++){
            mp[indices[i]] = s[i];
        }
        for(auto x : mp){
            ans += x.second;
        }
        return ans;
    }
};
