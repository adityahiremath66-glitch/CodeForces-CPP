class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
    int sum = 0;
    map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }
        for(auto x : mp){
            if(x.second == 1){
                sum += x.first;
            }
        }
        return sum;
    }
};
