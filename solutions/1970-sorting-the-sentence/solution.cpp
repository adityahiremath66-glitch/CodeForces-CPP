class Solution {
public:
    string sortSentence(string s) {
    int n = s.length();
    stringstream ss(s);
    vector<string> v;
    string word;
    map<int,string> mp;
    string ans;
        while(ss >> word){
            v.push_back(word);
        }
        
        for(int i=0; i<v.size(); i++){
            cout<<i;
            string t = v[i];
            t.pop_back();
            mp[(v[i][v[i].size()-1])-'0'] = t;
        }
        for(auto x : mp){
            ans += x.second;
            ans += " ";
        }
    ans.pop_back();
    return ans;
    }
};
