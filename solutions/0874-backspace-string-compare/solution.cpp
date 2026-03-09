class Solution {
public:
string result(string s){
    int n = s.length();
    stack<char> st;
    string ans;
        for(int i=0; i<n; i++){
            if(s[i] == '#' && !st.empty()){
                st.pop();
            }
            else if(s[i] != '#'){
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
    return ans;
}
    bool backspaceCompare(string s, string t) {
        return result(s) == result(t);
    }
};
