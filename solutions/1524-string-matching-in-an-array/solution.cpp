class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
    int n = words.size();
    set<string> s;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j != i && words[i].contains(words[j])){
                    s.insert(words[j]);
                }
            }
        }
    vector<string> ans(s.begin(),s.end());
        return ans;
    }
};
