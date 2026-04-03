class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
    int n = nums.size();
    int max_xor = 0,curr = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(abs(nums[i]-nums[j]) <= min(nums[i],nums[j])){
                    curr = nums[i]^nums[j];
                    max_xor = max(max_xor,curr);
                }
            }
        }
    return max_xor;
    }
};
