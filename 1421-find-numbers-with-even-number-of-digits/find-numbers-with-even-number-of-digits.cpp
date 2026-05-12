class Solution {
public:
    int dig(int x){
    int cnt = 0;
        while(x){
            int rem = x % 10;
            cnt++;
            x /= 10;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
    int n = nums.size();
    int ans = 0;
        for(int i=0; i<n; i++){
            if(dig(nums[i]) % 2 == 0){
                ans++;
            }
        }
        return ans;
    }
};