class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
    int n = word1.size();
    int m = word2.size();
    int freq1[26] = {0};
    int freq2[26] = {0};

        for(int i=0; i<n; i++){
            freq1[word1[i] - 97]++;
        }
        for(int i=0; i<m; i++){
            freq2[word2[i] - 97]++;
        }
        for(int i=0; i<26; i++){
            if(abs(freq1[i]-freq2[i]) > 3){
                return 0;
            }
        }
        return 1;
    }
};
