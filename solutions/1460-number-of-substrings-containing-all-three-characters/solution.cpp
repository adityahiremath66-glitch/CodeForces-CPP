class Solution {
public:
    int numberOfSubstrings(string s) {
    int n = s.length();
    int ans = 0;
    vector<int> last(3,-1);
        for(int i=0; i<n; i++){
            last[s[i]-97] = i;

            int min_idx = min({last[0],last[1],last[2]});
            if(min_idx != -1){
                ans += min_idx+1;
            }
        }
    return ans;
    }
};
