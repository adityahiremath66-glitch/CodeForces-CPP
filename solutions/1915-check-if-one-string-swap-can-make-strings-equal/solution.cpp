class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return 1;
    vector<int> f1(26,0);
    vector<int> f2(26,0);
        for(auto x : s1){
            f1[x-97]++;
        }
        for(auto x : s2){
            f2[x-97]++;
        }
        for(int i=0; i<26; i++){
            if(f1[i] != f2[i]){
                return 0;
            }
        }
    int cnt = 0;
        for(int i=0; i<s1.length(); i++){
            if(s1[i] != s2[i]){
                cnt++;
            }
        }

    return cnt > 2 ? 0 : 1;
    }
};
