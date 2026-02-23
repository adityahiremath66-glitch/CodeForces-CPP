class Solution {
public:
    int maxBalancedSubarray(vector<int>& nums) {
    int n = nums.size(),ans=0,even=0,odd=0;
    map<vector<int>,int> mp;
    vector<int> pre_xor(n+1);
    pre_xor[0] = nums[0];
    mp[{0,0}] = 0;
   
    //mp[0] = {0,0,1}
    if(nums[0] % 2 == 0){
        mp[{nums[0],1}] = 1;
        even++;
    }else{
        mp[{nums[0],-1}] = 1;
        odd++;
    }
        for(int i=1; i<n; i++){
            //cout<<i<<"\t";
            pre_xor[i] = pre_xor[i-1] ^ nums[i];
            
            if(nums[i]&1){
                odd++;
            } else {
                even++;
            }
            if(mp.find({pre_xor[i],even-odd})!=mp.end()){
                int idx = mp[{pre_xor[i],even-odd}];
                ans = max(ans,i-idx+1);
            } else {
                mp[{pre_xor[i],even-odd}] = i+1;
            }
        }
    return ans;  
    }
};
