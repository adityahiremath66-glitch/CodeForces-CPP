class Solution {
public:
    int max_dig(int x){
    int mx = -1;
        while(x){
            int rem = x % 10;
            mx = max(rem,mx);
            x /= 10;
        }
        return mx;
    }
    int min_dig(int x){
    int mn = INT_MAX;
        while(x){
            int rem = x % 10;
            mn = min(rem,mn);
            x /= 10;
        }
        return mn;
    }
    int maxDigitRange(vector<int>& nums) {
    int n = nums.size();
    multimap<int,int> mp;
    int mx = -1,ans = 0;
        for(int i=0; i<n; i++){
            mx = max(max_dig(nums[i])-min_dig(nums[i]),mx);
            mp.insert({max_dig(nums[i])-min_dig(nums[i]),nums[i]});
        }
        for(auto x : mp){
            if(x.first == mx){
                ans += x.second;
            }
        }
    return ans;
    }
};