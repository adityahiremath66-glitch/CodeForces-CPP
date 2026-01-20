class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int max_sum = 0;
    int min_sum = 0;
        for(int i=n-1; i>=n-k; i--){
            max_sum += nums[i];
        }
        for(int i=0; i<k; i++){
            min_sum += nums[i];
        }
        return abs(max_sum-min_sum);
    }
};
