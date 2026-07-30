class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int j = n-1;
    bool check;
        for(int i=n-1; i>=0; i--){
            if(i-1 >= 0 && nums[i] < nums[i-1]){
                check = false;
                continue;
            }
            if(i-1 >= 0 && nums[i] > nums[i-1]){
                check = true;
                while(nums[i-1] >= nums[j]){
                    j--;
                }
                swap(nums[i-1],nums[j]);
                j = i;
                break;
            }
        }
        if(check){
            sort(nums.begin()+j,nums.end());
        }
        if(!check){
            reverse(nums.begin(),nums.end());
        }
    }
};