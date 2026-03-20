class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    int n = nums.size();
    map<int,vector<int>> mp;  
        for(int i=0; i<n; i++){
            mp[nums[i]].push_back(i);
        }
        for(auto x : mp){
            for(int i=1; i<x.second.size(); i++){
                if(abs(x.second[i]-x.second[i-1]) <=k){
                    return 1;
                }
            }
        }
        return 0;
    }
};
