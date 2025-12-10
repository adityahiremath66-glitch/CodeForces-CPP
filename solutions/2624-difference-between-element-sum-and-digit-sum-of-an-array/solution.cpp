class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
    int n = nums.size();
    int tot_sum = 0;
    int dig_sum = 0;
        for(int i=0; i<n; i++){
            tot_sum += nums[i];
        }
        for(int i=0; i<n; i++){
            if(nums[i] > 9){
                int x = nums[i];
                while(x != 0){
                    int last_dig = x % 10;
                    dig_sum += last_dig;
                    x /= 10;
                }
            }else{
            dig_sum += nums[i];
            }
        }
    return abs(tot_sum - dig_sum);
    }
};
