class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
    int n = nums.size();
    map<int,int> mp1,mp2;
        for(auto x : nums){
            mp1[x]++;
        }

        for(auto x : mp1){
            mp2[x.second]++;
        }
        for(int i = 0; i < n; i++) {
            if(mp2[mp1[nums[i]]] == 1)
                return nums[i];
        }
        return -1;
    }
};
