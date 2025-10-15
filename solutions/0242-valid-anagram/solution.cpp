class Solution {
public:
    bool isAnagram(string s, string t) {
    int freq1[26] = {0};
    int freq2[26] = {0};
    int n = s.length();
    int m = t.length();
        for(int i=0; i<n; i++){
            freq1[s[i] - 97]++;
        }
        for(int i=0; i<m; i++){
            freq2[t[i] - 97]++;
        }
        for(int i=0; i<26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }
};
