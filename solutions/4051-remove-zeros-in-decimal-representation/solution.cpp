class Solution {
public:
    long long removeZeros(long long n) {
    string s = to_string(n);
    string ans;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '0'){
                continue;
            }else{
                ans.push_back(s[i]);
            }
        }
        long long x = stoll(ans);

    return x;
    }
};
