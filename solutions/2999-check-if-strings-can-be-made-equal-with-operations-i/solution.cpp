class Solution {
public:
    bool canBeEqual(string s1, string s2) {
    int n = s1.length();
        
        for(int i=0; i<n; i++){
            if(s1[i] == s2[i]){
                continue;
            }
            if(i+2<n){
                swap(s1[i],s1[i+2]);
            }
            if(s1[i] != s2[i]){
                return 0;
            }
        }
        return 1;
    }
};
