class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int cnt = 0;
    vector<int> pre(n,0);
    pre[0] = nums[0];
        for(int i=1; i<n; i++){
            pre[i] = pre[i-1] + nums[i];
        }
    unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            if(pre[i] == k) cnt++;
        int val = pre[i] - k;
            if(mp.find(val) != mp.end()){
                cnt += mp[val];
            }
            if(mp.find(pre[i]) == mp.end()){
                mp[pre[i]] = 0;
            }
            mp[pre[i]]++;
        }
        return cnt;
    }
};
