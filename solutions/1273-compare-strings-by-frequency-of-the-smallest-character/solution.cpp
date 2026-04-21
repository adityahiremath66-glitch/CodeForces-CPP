class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& q, vector<string>& w) {
    int n = q.size();
    int m = w.size();
    vector<int> a,b,ans;
        for(int i=0; i<n; i++){
            map<char,int> mp;
            for(auto x : q[i]){
                mp[x]++;    
            }
        auto it = mp.begin();
        a.push_back(it->second);
        }
        for(int i=0; i<m; i++){
            map<char,int> mp;
            for(auto x : w[i]){
                mp[x]++;    
            }
        auto it = mp.begin();
        b.push_back(it->second);
        }
    sort(b.begin(),b.end());
        for(int i=0; i<n; i++){
            auto it = upper_bound(b.begin(),b.end(),a[i]);
            int ind = distance(b.begin(),it);
                ans.push_back(m-ind);
            
        }
    return ans;
    }
};
