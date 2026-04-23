class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    set<vector<int>> ans;
        for(int i=0; i<n; i++){
            int st=i+1,end=n-1;
            while(st<end){
                if(nums[st]+nums[end] == -1*nums[i]){
                    ans.insert({nums[i],nums[st],nums[end]});
                    st++; end--;
                }else if(nums[st]+nums[end] > -1*nums[i]){
                    end--;
                }else{
                    st++;
                }
            }
        }
    vector<vector<int>> a(ans.begin(),ans.end());

    return a;
    }
};
