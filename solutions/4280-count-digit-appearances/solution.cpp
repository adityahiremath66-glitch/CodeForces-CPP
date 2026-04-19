class Solution {
public:
    int no_twos(int x,int y){
    int cnt = 0;
        while(x){
            int rem = x % 10;
            if(rem == y) cnt++;
            x /= 10;
        }
        return cnt;
    }
    int countDigitOccurrences(vector<int>& nums, int dig) {
    int n = nums.size();
    int ans = 0;
        for(auto x : nums){
            ans += no_twos(x,dig);
        } 
    return ans;
    }
};
