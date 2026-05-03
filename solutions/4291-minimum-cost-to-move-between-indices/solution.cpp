class Solution {
public:
    vector<int> minCost(vector<int>& nums, vector<vector<int>>& q) {
    int n = nums.size();
    vector<int> pre(n, 0), suff(n, 0), ans;

        for(int i=0; i<n-1; i++){
            int cost;
            if(i == 0 || (nums[i+1] - nums[i] < nums[i] - nums[i-1])){
                cost = 1;
            }else{
                cost = abs(nums[i+1] - nums[i]);
            }
            pre[i+1] = pre[i] + cost;
        }
        for(int i=n-1; i>0; i--){
            int cost;
            if (i == n - 1 || (nums[i] - nums[i-1] <= nums[i+1] - nums[i])) {
                cost = 1;
            }else{
                cost = abs(nums[i] - nums[i-1]);
            }
            suff[i-1] = suff[i] + cost;
        }

        for(int i=0; i<q.size(); i++){
            if(q[i][0] < q[i][1]){
                ans.push_back(pre[q[i][1]] - pre[q[i][0]]);
            }else{
                ans.push_back(suff[q[i][1]] - suff[q[i][0]]);
            }
        }
        return ans;
    }
};
