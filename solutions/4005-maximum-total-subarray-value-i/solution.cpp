class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
    int n = nums.size();
    long long mx = INT_MIN;
    long long mn = INT_MAX;
        for(int i=0; i<n; i++){
            mx = max(mx,(long long)nums[i]);
            mn = min(mn,(long long)nums[i]);
        }
    return (mx-mn)*k;
    }
};
