class Solution {
public:
    bool canMakeSubsequence(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();
    int j = 0;
        if(m > n) return 0; 
        for(int i=0; i<n; i++){
            if(j == m){
                break;
            }
            if((s1[i]-97)+1 == (s2[j]-97) || s1[i] == s2[j]){                
                j++;
            }
            if(s1[i] == 'z' && s2[j] == 'a'){
                j++;
            }
        }
    if(j == m) {
        return 1;
    }
        return 0;
    }
};
