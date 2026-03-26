class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
    int n = nums.size();
    map<int,int> mp;
        for(auto x : nums){
            if(x % 2 == 0){
                mp[x]++;
            }
        }
        for(int i=0; i<n; i++){
            if(mp[nums[i]] == 1 && nums[i] % 2 == 0){
                return nums[i];
            }
        }
        return -1;
    }
};
