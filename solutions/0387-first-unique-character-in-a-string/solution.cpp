class Solution {
public:
    int firstUniqChar(string s) {
    int n = s.length();
    int freq[26] = {0};
        for(int i=0; i<n; i++){
            freq[s[i]-97]++;
        }
        for(int i=0; i<n; i++){
            if(freq[s[i]-97] == 1){
                return i;
            }
        }
        return -1;
    }
};
