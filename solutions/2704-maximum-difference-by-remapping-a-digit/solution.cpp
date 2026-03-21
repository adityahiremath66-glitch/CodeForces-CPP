class Solution {
public:
    int minMaxDifference(int num) {
    string s = to_string(num);
    string t = to_string(num);
    int n = s.length();
    char a,b;
        for(int i=0; i<n; i++){
            if(s[i] != '9'){
                a = s[i];
                break;
            }
        }
        for(int i=0; i<n; i++){
            if(t[i] != '0'){
                b = t[i];
                break;
            }
        }
        for(int i=0; i<n; i++){
            if(a == s[i]){
                s[i] = '9';
            }
        }  
    int mx = stoi(s);
        for(int i=0; i<n; i++){
            if(b == t[i]){
                t[i] = '0';
            }
        }
    int mn = stoi(t);
        return abs(mx - mn);
    }
};
