class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
    int n = nums.size();
    vector<int> a;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if((nums[i] == 1 && nums[j] == 2) || (nums[i] == 2 && nums[j] == 1)){
                    a.push_back(abs(i-j));
                }
            }
        }
        if(a.empty()){
            return -1;
        }
    int ans = INT_MAX;
        for(int i=0; i<a.size(); i++){
            ans = min(a[i],ans);
        }
        return ans;
    }
};
