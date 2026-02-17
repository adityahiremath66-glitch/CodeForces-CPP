class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
    int n = words.size();
    map<string, int> mp;
    int count = 0;
        for(int i=0; i<n; i++){
            if(words[i].size() >= k){
                mp[words[i].substr(0,k)]++;
            }
        }
        for(auto x : mp){
            if(x.second >= 2){
                count++;
            }
        }
    return count;
    }
};
