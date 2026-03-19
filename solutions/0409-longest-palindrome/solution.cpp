class Solution {
public:
    int longestPalindrome(string s) {
    int n = s.length();
    map<char,int> mp;
    int ans = 0;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        for(auto x : mp){
            if(x.second >= 2){
                ans += x.second - (x.second%2);
            }
        }
        if(ans < n){
            return ans+1;
        }
        return ans;
    }
};
