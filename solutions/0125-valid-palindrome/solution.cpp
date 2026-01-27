class Solution {
public:
    bool isPalindrome(string s) {
    int n = s.length();
    string ans;
        for(int i=0; i<n; i++){
            if(isupper(s[i])){
                ans.push_back(tolower(s[i]));
            }if(islower(s[i])){
                ans.push_back(s[i]);
            }
            if(isdigit(s[i])){
                ans.push_back(s[i]);
            }
            
        }
        int x = ans.length();
        if(x == 1){
            return true;
        }
        for(int i=0; i<x; i++){
            if(ans[i] != ans[x-i-1]){
                return false;
            }
        }
        return true;
    }
};
