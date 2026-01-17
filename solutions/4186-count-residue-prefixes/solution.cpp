class Solution {
public:
    int residuePrefixes(string s) {
    int n = s.length();
    int ans = 0;
    set<int> s1;
        for(int i=0; i<n; i++){
            s1.insert(s[i]);
            if(s1.size() == (i+1)%3){
                ans++;
            }
        }
    return ans;
    }
};
