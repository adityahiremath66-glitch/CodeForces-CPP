class Solution {
public:
    int minimumIndex(vector<int>& nums) {
    int n = nums.size(),dom,tot;
    map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }
        for(auto x : mp){
            if(x.second > n/2){
                dom = x.first;
                tot = x.second;
                break;
            } 
        }
    int l_cnt = 0;
        for(int i=0; i<n-1; i++){
            if(nums[i] == dom){
                l_cnt++;
            }
        int r_cnt = tot-l_cnt;
        int l_size = i+1;
        int r_size = n-l_size;

        if(2*l_cnt > l_size && 2*r_cnt > r_size){
            return i;
        }    
        }
    return -1;
    }
};
