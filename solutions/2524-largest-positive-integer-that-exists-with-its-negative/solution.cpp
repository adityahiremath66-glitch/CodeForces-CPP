class Solution {
public:
    int findMaxK(vector<int>& nums) {
    int n = nums.size();
    unordered_set st(nums.begin(),nums.end());
    sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if(nums[i] > 0){
                break;
            }
            if(st.count(-1*nums[i])){
                return -1*nums[i];
            }
        }
        return -1;
    }
};
