class Solution {
public:
    vector<int> processQueries(vector<int>& q, int m) {
    int n = q.size();
    vector<int> p,ans;
        for(int i=1; i<=m; i++){
            p.push_back(i);
        }
        for(int i=0; i<n; i++){
            auto it = find(p.begin(),p.end(),q[i]);
            int idx = it - p.begin();
            p.insert(p.begin(),p[idx]);
            p.erase(p.begin()+idx+1);
            ans.push_back(idx);
        }
    return ans;
    }
};
