class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
    vector<long long> ans;
    int n = nums.size();
    stack<long long> st;
        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push(nums[i]);
                cout<<st.top()<<"\t";
                continue;
            }
            
            long long t = nums[i],r;
            while(!st.empty() && t == st.top()){
                st.pop();
                st.push(2*t);
                cout<<st.top()<<"\t";
                    t = st.top();
                    st.pop();
            }
            st.push(t);
        }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
                  
    return ans;
    }
};
