class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
    int n = nums.size();
    int opr = 0;
        for(int i=0; i<n; i++){
            if(nums[i] < k){
                opr++;
            }
        }
        return opr;
    }
};
