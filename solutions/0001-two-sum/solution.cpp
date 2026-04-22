class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
    int n = nums.size();
    unordered_map<int,int> mp;
    int a,b;
        for(int i=0; i<n; i++){
            mp.insert({nums[i],i});
        }
        for(int i=0; i<n; i++){
            auto it = mp.find(tar-nums[i]);
            if(it != mp.end() && it->first+nums[i] == tar && i!=it->second){
                a = i;
                b = it->second; 
                
            }
        }
        return {a,b};
    }
};
