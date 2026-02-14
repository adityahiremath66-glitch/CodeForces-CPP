class Solution {
public:
    int dominantIndices(vector<int>& nums) {
    int n = nums.size();
        if(n <= 1){ 
            return 0;
        }
    int count = 0;
    double suffixSum = nums[n-1];
        for(int i=n-2; i>=0; i--){
            double curr_avg = suffixSum/(n-1-i);
                if(nums[i] > curr_avg){
                    count++;
                
        }
        suffixSum += nums[i];
        }

        return count;
    }
};
