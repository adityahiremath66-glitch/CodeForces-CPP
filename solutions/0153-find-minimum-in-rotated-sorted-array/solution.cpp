class Solution {
public:
    int findMin(vector<int>& nums) {
    int n = nums.size();
    int ans = nums[0];
    
        for(int i=0; i<n-1; i++){
            if(nums[i] > nums[i+1]){
                ans = nums[i+1];
            }
        }
    if(nums[0] < nums[n-1]){
        ans = nums[0];
    }
        return ans;
    }
};
