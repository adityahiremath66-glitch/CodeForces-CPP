class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
    int n = tasks.size();
    vector<int> vec;
    int x,ans = INT_MAX;
        for(int i=0; i<n; i++){
            x = tasks[i][0] + tasks[i][1];
            vec.push_back(x);
        }
        for(int i=0; i<vec.size(); i++){
            ans = min(ans,vec[i]);
        }
        return ans;
    }
};
