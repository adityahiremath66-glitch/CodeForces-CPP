class Solution {
public:
    bool check(string s){
    int n = s.length();
        for(int i=0; i<n/2; i++){
            if(s[i] != s[n-i-1]){
                return 0;
            }
        }
    return 1;
    }
    string firstPalindrome(vector<string>& words) {
    int n = words.size();
        for(int i=0; i<n; i++){
            if(check(words[i])){
                return words[i];
            }
        }
        return "";
    }
};
