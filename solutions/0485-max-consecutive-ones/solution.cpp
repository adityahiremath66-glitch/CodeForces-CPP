class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int ans=0, curr=0;
        for(auto i: nums){
            if(i==0){
                ans = max(ans, curr);
                curr=0;
            }
            else curr++;
        }
        return max(ans, curr);
    }
};
