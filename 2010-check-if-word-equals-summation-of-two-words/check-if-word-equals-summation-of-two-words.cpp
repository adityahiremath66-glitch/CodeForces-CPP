class Solution {
public:
    bool isSumEqual(string fw, string sw, string tw) {
    string p,q,r;
        for(auto x : fw){
            p += ((x-97)+'0');
        }
        for(auto x : sw){
            q += ((x-97)+'0');
        }
        for(auto x : tw){
            r += ((x-97)+'0');
        }
    int x = stoi(p)+stoi(q);
    string s = to_string(x);
    int y = stoi(r);
    string t = to_string(y);
    cout<<s<<"\t"<<t;
        return s == t;
    }
};