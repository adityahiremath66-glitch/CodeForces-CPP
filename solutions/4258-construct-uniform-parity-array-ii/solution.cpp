class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
    int n = nums1.size();
    int odd_cnt=0,even_cnt=0;
        for(int i=0; i<n; i++){
            if(nums1[i] % 2 == 0) even_cnt++;
            else odd_cnt++;
        }
        if(odd_cnt == 0 || even_cnt == 0){
            return 1;
        }
    int mn_odd = INT_MAX;
    for(auto x :nums1){
        if(x % 2 == 1){
            mn_odd = min(mn_odd,x);
        }
    }
    for(auto x : nums1){
        if(x % 2 == 0 && x-mn_odd < 1){
            return 0;
        }
    }

        return 1;
    }
};
