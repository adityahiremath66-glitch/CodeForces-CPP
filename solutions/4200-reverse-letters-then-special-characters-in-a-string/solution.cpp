class Solution {
public:
    string reverseByType(string s) {
    int n = s.length();
    string s1,s2,ans;
        for(int i=0; i<n; i++){
            if(islower(s[i])){
                s1.push_back(s[i]);
            }else{
                s2.push_back(s[i]);
            }
        }
        for(int i=0; i<n; i++){
            if(islower(s[i])){
                ans.push_back(s1.back());
                s1.pop_back();
            }else{
                ans.push_back(s2.back());
                s2.pop_back();
            }
        }
        return ans;
    }
};
