class Solution {
public:
    string getEncryptedString(string s, int k) {
    int n = (int)s.size();
    string ans;
    k = k % n;
    ans.resize(n);
        for(int i=0; i<n; ++i){ 
            ans[i] = s[(i+k)%n];
        }
    
    return ans;
    }
};
