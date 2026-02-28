class Solution {
public:
    string longestCommonPrefix(vector<string>& strs){
    int n = strs.size();
    sort(strs.begin(),strs.end());
    string ans;
    string s = strs[0],t = strs[n-1];
    int min_itr = min(s.length(),t.length());

    for(int i=0; i<min_itr; i++){
        if(s[i] != t[i]){
            break;
        } 
        if(s[i] == t[i]){
            ans.push_back(s[i]);
            continue;
        }
    }
    return ans;
    }
};
