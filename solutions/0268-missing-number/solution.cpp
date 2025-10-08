class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int ans = -1;
    sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if(i != nums[i]){
                ans = i;
                break;
            }
        }
        if(ans == -1){
            ans = nums[n-1] + 1;
        }
        return ans;
    }
};
