class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int j = 0,cnt = 1,i;
        for(i=1; i<n; i++){
            if(nums[i] != nums[i-1]){
                if(cnt >= 2){
                    nums[j] = nums[i-1];
                    j++;
                    nums[j] = nums[i-1];
                    j++;
                }else{
                    nums[j] = nums[i-1];
                    j++;
                }
                cnt = 1;
            }else{
                cnt++;
            }
        }
        if(cnt >= 2){
                    nums[j] = nums[i-1];
                    j++;
                    nums[j] = nums[i-1];
                    j++;
                }else{
                    nums[j] = nums[i-1];
                    j++;
                }
        return j;
    }
};
