class Solution {
public:
    bool isSubsequence(string s, string t) {
    int n = s.length(),m = t.length();
    int i = 0;
        for(int j=0; j<m; j++){
            if(s[i] == t[j]){
                i++;
            }
        }
        
        return n == i;
    }
};
