class Solution {
public:
    int dominantIndex(vector<int>& nums) {
    int n = nums.size();
    vector<int> nums1(nums.begin(),nums.end());
    map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]] = i;
        }
    sort(nums1.begin(),nums1.end());
        if(nums1[n-1] < nums1[n-2]*2){
            return -1;
        } 
    return mp[nums1[n-1]];
    }
};
