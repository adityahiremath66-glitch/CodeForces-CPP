class Solution {
public:
    string removeKdigits(string num, int k) {
    int n = num.size();
    stack<char> st;
    string ans;
        for(int i=0; i<n; i++){
            while(!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        
    while(k > 0 && !st.empty()) {
        st.pop();
        k--;
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());

    int i = 0;
        while(i < ans.size() && ans[i] == '0'){
            i++;
        }
    ans = ans.substr(i);
    if(ans.empty()){
        ans = "0";
    }
    

    return ans;

    }
};
