class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
    int n = nums.size();
    set<int> st;
    int ans = 0;
    
            for(int i=n-1; i>=0; i--){
                if(st.size() == k) break;
                
                if(nums[i] <= k) st.insert(nums[i]);
                ans++;
            }
        return ans;
    }
};
