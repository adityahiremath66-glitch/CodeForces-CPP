class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
    int n = nums.size();
    int ans = 0;
    unordered_map<int,vector<int>> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]].push_back(i);
        }
        for(auto x : mp){
            if(x.second.size() >= 3){
                bool check = true;
                int a = x.second[1] - x.second[0];
                for(int i=2; i<x.second.size(); i++){
                    if(x.second[i] - x.second[i-1] != a){
                        check = false;
                        break;
                    }
                }
                if(check) ans++;
            }
        }
        
        return ans;
    }
};