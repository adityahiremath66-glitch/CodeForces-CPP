class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> v;
        for(int i=0; i<n; i++){
            if(nums[i] >= 0){
                v.push_back(nums[i]);
            }
        }
        if(v.empty()){
            return nums;
        }
        k = k % v.size();
        rotate(v.begin(),v.begin()+k,v.end());
        reverse(v.begin(),v.end());
        for(int i=0; i<n; i++){
            if(nums[i] >= 0){
                nums[i] = v.back();
                v.pop_back();
            }
        }
        return nums;
    }
};
