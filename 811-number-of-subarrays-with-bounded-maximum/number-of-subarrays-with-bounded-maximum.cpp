class Solution {
public:
    int cnt(vector<int>& nums,int range){
    int ans=0,count=0;
        for(auto x : nums){
            if(x <= range){
                count += 1;
            }else{
                count = 0;
            }
        ans += count;
        }
    return ans;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int l, int r) {
        return cnt(nums,r)-cnt(nums,l-1);
    }
};