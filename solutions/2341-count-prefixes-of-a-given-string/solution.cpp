class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
    int n = s.length();
    vector<string> pre;
        for(int i=0; i<n; i++){
            string t;
            for(int j=0; j<=i; j++){
                t.push_back(s[j]);
            }
            pre.push_back(t);
        }
    int cnt = 0;
        for(int i=0; i<words.size(); i++){
            if(find(pre.begin(),pre.end(),words[i]) != pre.end()){
                cnt++;
            }
        }
        return cnt;
    }
};
