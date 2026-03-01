class Solution {
public:
    int lengthOfLastWord(string s) {
    int n = s.length();
    int ans = 0;
    int x = n-1;
        while(s[x] == ' '){
            --x;
        }
    n = s.length();
        for(int i=x; i>=0; i--){
            if(s[i] == ' '){
                break;
            }else{
                ans++;
            }
        }
        return ans;
    }
};
