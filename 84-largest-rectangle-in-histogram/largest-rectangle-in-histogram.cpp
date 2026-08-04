class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
    int n = h.size();
    vector<int> l(n,0);
    vector<int> r(n,0);
    stack<int> st;
        for(int i=n-1; i>=0; i--){
            while(st.size() > 0 && h[st.top()] >= h[i]){
                st.pop();
            }
            if(st.empty()){
                r[i] = n;
            }else{
                r[i] = st.top();
            }
            st.push(i);
        }
    while(!st.empty()){
        st.pop();
    }
        for(int i=0; i<n; i++){
            while(st.size() > 0 && h[st.top()] >= h[i]){
                st.pop();
            }
            if(st.empty()){
                l[i] = -1; 
            }else{
                l[i] = st.top();
            }
            st.push(i);
        }
    int ans = 0;
        for(int i=0; i<n; i++){
            int wd = r[i]-l[i]-1;
            ans = max(ans,h[i]*wd);
        }
        return ans;
    }
};