class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
    int n = nums.size();
    long long sum = 0;
        for(int i=0; i<n; i++){
            bool ok = true;
            if(i-k >= 0 && nums[i] <= nums[i-k]) 
                ok = false;
            if(i+k < n && nums[i] <= nums[i+k]) 
                ok = false;
            if(ok){
                sum += nums[i];
            }
        }
        return sum;
    }
};
