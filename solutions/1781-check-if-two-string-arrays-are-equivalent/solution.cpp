class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    int n = word1.size();
    int m = word2.size();
    string t,s;
        for(int i=0; i<n; i++){
            t += word1[i];
        }
        for(int i=0; i<m; i++){
            s += word2[i];
        }
        return s == t;
    }
};
