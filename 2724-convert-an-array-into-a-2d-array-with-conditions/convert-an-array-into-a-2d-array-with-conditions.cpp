class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;
    unordered_map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }
        while (!mp.empty()) {
            vector<int> temp, toErase;
            for(auto &[i, j] : mp) {
                temp.push_back(i);
                j--;
                if(j == 0) {
                    toErase.push_back(i);
                }
            }
            ans.push_back(temp);
            for(auto &x : toErase){
                mp.erase(x);
            }
        }
        return ans;
    }
};