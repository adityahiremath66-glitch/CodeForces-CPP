class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
    int n = nums.size();
    vector<int> max_diff;
    int ans = -1;
        for(int i=0; i<n-1; i++){
            max_diff.push_back(abs(nums[i]-nums[i+1]));
        }
        max_diff.push_back(abs(nums[0]-nums[n-1]));
        for(int i=0; i<max_diff.size(); i++){
            ans = max(ans,max_diff[i]);
        }
        return ans;
    }
};
