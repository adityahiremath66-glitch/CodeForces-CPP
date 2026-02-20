class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
    int n = cost.size();
    map<char,long long> mp;
    long long tot_cst = 0;
        for(int i=0; i<n; i++){
            mp[s[i]] += cost[i];
            tot_cst += cost[i];
        }
    long long ans = LLONG_MAX;
        for(auto x : mp){
            ans = min(tot_cst-x.second,ans);
        }
              

    return ans;
    }
};
