class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
    int n = nums.size(),x = 0;
    vector<int> v1,v2;
    v1.push_back(nums[0]);
        for(int i=1; i<n-1; i++){
            if(nums[i] > v1.back()){
                v1.push_back(nums[i]);
                x = i;
            }
        }
    v2.push_back(nums[n-1]);
        for(int j=n-2; j>x; j--){
            if(nums[j] > v2.back()){
                v2.push_back(nums[j]);    
            }
        }
        while(!v2.empty()){
            v1.push_back(v2.back());
            v2.pop_back();
        }
        if(n == 1 || n == 2){
            return nums;
        }
    return v1;
    }
};
