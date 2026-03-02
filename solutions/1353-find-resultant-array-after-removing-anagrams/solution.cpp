class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
    vector<string> ans;

        for(int i=0; i<words.size(); i++) {
            if(ans.empty()) {
                ans.push_back(words[i]);
            }else{
                string a = ans.back();
                string b = words[i];
                sort(a.begin(), a.end());
                sort(b.begin(), b.end());
                if(a != b){
                    ans.push_back(words[i]);
                }
            }
        }
        return ans;
    }
};
