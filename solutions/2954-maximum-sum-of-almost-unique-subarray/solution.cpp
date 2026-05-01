class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k){
    long long n = nums.size(),sum=0;
    vector<long long> v;
    map<int,int> mp;
        for(int i=0; i<k; i++){
            mp[nums[i]]++;
            sum += nums[i];
        }
        if(mp.size() >= m){
            v.push_back(sum);
        }
        for(int i=k; i<n; i++){
            mp[nums[i-k]]--;
            if(mp[nums[i-k]] == 0){
                mp.erase(nums[i-k]);
            }
            mp[nums[i]]++;
            sum -= nums[i-k];
            sum += nums[i];
            if(mp.size() >= m){
                v.push_back(sum);
            }
        }
        
    long long ans = 0;
        for(auto x : v){
            ans = max(ans,x);
        }
    return ans;
    }
};
