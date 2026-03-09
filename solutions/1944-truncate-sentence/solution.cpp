class Solution {
public:
    string truncateSentence(string s, int k) {
    int n = s.length();
    stringstream ss(s);
    vector<string> words1,words2;
    string ans;
        while(getline(ss, s, ' ')){
            words1.push_back(s);
        }
        for(int i=0; i<k; i++){
            words2.push_back(words1[i]);
        }
        for(string x : words2){
            if(!ans.empty()){
                ans += ' ';
            }
            ans += x;
        }
        return ans;
    }
};
