class Solution {
public:
    int first_dig(long long x){
        while(x >= 10){
            x /= 10;
        }
        return int(x);
    }
    int countValidSubarrays(vector<int>& nums, int x) {
    int n = nums.size();
    int cnt = 0;
        for(int i=0; i<n; i++){
            long long sum = 0;
            for(int j=i; j<n; j++){
                sum += nums[j];
                if(sum % 10 == x && first_dig(sum) == x){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};