class Solution {
public:
    int maximumGap(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int ans = -1;
        for(int i=1; i<n; i++){
            ans = max(ans,abs(nums[i]-nums[i-1]));
        }
        if(ans == -1){
            return 0;
        }
        return ans;
    }
};
