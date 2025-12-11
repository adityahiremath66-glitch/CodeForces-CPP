class Solution {
public:
    string makeSmallestPalindrome(string s) {
    int n = s.length();
    int count = 0;
        for(int i=0; i<n/2; i++){
            if(s[i] == s[n-i-1]){
                continue;
            }
            else if(s[i] != s[n-i-1] && s[i] > s[n-i-1] ){
                s[i] = s[n-i-1];
                
            }else{
                s[n-i-1] = s[i];
            }
        }
    return s;
    }
};
