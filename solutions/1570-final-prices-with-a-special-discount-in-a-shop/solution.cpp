class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
    int n = prices.size();
    stack<int> st;
    vector<int> sm(n),ans;
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && prices[i] < st.top()){
                st.pop();
            }
            if(st.empty()){
                sm[i] = 0;
            }else{
                sm[i] = st.top();
            }
            st.push(prices[i]);
        }
        for(int i=0; i<n; i++){
            ans.push_back(prices[i]-sm[i]);
        }
        return ans;
    }
};
