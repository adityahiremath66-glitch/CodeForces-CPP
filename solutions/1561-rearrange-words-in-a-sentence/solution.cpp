class Solution {
public:
   static bool cmp(string a,string b){
        
        if(a.length()>=b.length()){
            return 0;
        }
        return 1;
    }
    string arrangeWords(string text) {
    int n = text.length();
    vector<string> a;  
    text[0] = tolower(text[0]);
    stringstream check1(text);
        string temp;
        while(getline(check1, temp, ' ')){
            a.push_back(temp);
    }
    stable_sort(a.begin(),a.end(),cmp);
    string ans;
    for(auto x:a){
        ans+=x;
        ans+=" ";
    }
    ans[0]=toupper(ans[0]);
    ans.pop_back();
    return ans;
    }
};
