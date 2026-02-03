class Solution {
public:
    long long maximumScore(vector<int>& nums) {
    long long n = nums.size();
    vector<long long> pre_sum(n,0);
    vector<int> suff_min;
    vector<long long> score;
    long long min_ele = INT_MAX;
    pre_sum[0] = nums[0];
        for(int i=1; i<n; i++){
            pre_sum[i] = pre_sum[i-1] + nums[i];
        }
    suff_min.push_back(nums[n-1]);
        for(int i=n-2; i>=0; i--){
            min_ele = min(nums[i],suff_min.back());
            suff_min.push_back(min_ele);
        }
        reverse(suff_min.begin(),suff_min.end());
        //suff_min.push_back(0);
        for(int i=0; i<n-1; i++){
                score.push_back(pre_sum[i] - suff_min[i+1]);
        }
    long long ans = INT_MIN;
        for(int i=0; i<score.size(); i++){
            if(score[i] > ans){
                ans = score[i];
            }
        }
        return ans;
    }
};
