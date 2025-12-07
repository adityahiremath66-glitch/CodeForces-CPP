class Solution {
public:
    int maximumDifference(vector<int>& nums) {
    long long n = nums.size();
    vector<int> a;
    int x = INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] < nums[j]){
                    a.push_back(nums[j] - nums[i]);
                }
            }
        }
        if(a.empty()){
            return -1;
        }
        for(int i=0; i<a.size(); i++){
            if(a[i] > x){
                x = a[i];
            }         
        }
        return x;
    }
};
