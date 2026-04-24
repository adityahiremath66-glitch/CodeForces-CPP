class Solution {
public:
    bool isvowel(char s){
        if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
            return 1;
        }
    return 0;
    }
    int maxVowels(string s, int k) {
    int n = s.length();
    int v_cnt = 0;
    vector<int> v;
        for(int i=0; i<k;i++){
            if(isvowel(s[i])){
                v_cnt++;
            }
        }
    v.push_back(v_cnt);
    int curr_vcnt = v_cnt;
        for(int i=k; i<n; i++){
            if(isvowel(s[i])){
                curr_vcnt++;         
 }          if(isvowel(s[i-k])){
                curr_vcnt--;
            }
            v.push_back(curr_vcnt);
        }
    int ans = INT_MIN;
        for(int i=0; i<v.size(); i++){
            ans = max(ans,v[i]);
        }
    return ans;
    }
};
