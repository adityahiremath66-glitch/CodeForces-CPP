class Solution {
public:
    string removeDuplicates(string s) {
    stack<int> st;
    string t;
    int n = s.length();
        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            if(st.top() == s[i]){
                st.pop();
            }else
                st.push(s[i]);
        }
        while(!st.empty()){
            t.push_back(st.top());
            st.pop();
        }
        reverse(t.begin(),t.end());
        
        return t;
    }
};
