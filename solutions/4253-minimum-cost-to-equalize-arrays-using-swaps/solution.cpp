class Solution {
public:
    int minCost(vector<int>& n1, vector<int>& n2) {
    int n = n1.size();
    map<int,int> mp1,mp2,mp12;
    sort(n1.begin(),n1.end());
    sort(n2.begin(),n2.end());
        if(n1 == n2) return 0;
        for(auto x : n1){
            mp1[x]++;
            mp12[x]++;
        }
        for(auto x : n2){
            mp2[x]++;
            mp12[x]++;
        }
        for(auto x : mp12){
            if(x.second % 2 == 1) return -1;
        }
    int ans = 0;
        for(auto &[x,y] : mp12){
            ans += abs(mp1[x]-mp2[x])/2;
        }
        return ans/2;
    }
};
