class Solution {
public:
    int maxDistance(vector<int>& n1, vector<int>& n2) {
    int n = n1.size();
    int m = n2.size();
    vector<int> v;
    int i = 0;
        for(int j=0; j<m; j++){
            while(i < n && n1[i] > n2[j]){
                i++;
            }
            if(i == n) break;
            if(i<=j){
                v.push_back(j-i);
            }
        }
    int ans = 0;
        for(auto x : v){
            ans = max(x,ans);
        }
    return ans;
    }
};
