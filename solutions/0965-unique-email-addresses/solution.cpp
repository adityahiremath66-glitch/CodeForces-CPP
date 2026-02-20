class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
    int n = emails.size();
    set<string> ans;
        for(int i=0; i<n; i++){
            string s;
            for(int j=0; j<emails[i].size(); j++){
                if(emails[i][j] == '+' || emails[i][j] == '@'){
                    break;
                }
                if(emails[i][j] == '.'){
                    continue;
                }
                s.push_back(emails[i][j]);
            }
            s += emails[i].substr(emails[i].find('@'));
            ans.insert(s);
        }
        return ans.size();
    }
};
