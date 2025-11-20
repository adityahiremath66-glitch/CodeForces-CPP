class Solution {
public:
    int minOperations(string s) {
    vector<int> freq(26,0);
    int n = s.length();
    int opr = 0;
        for(int i=0; i<n; i++){
            freq[s[i]-97]++;
        }

        for(int i=1; i<26; i++){
            if(freq[i] > 0){
            int x = 26-i;
                if(x > opr){
                    opr = x;
                }
            }
        }
        return opr;
    }
};
