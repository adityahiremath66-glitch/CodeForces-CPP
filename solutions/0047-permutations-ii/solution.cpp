class Solution {
public:
    void getallperm(vector<int>& nums,int idx,set<vector<int>> &ans) {
        if(idx == nums.size()){
            ans.insert(nums);
            return;
        }
        for(int i=idx; i<nums.size(); i++){

            swap(nums[idx],nums[i]);
            getallperm(nums,idx+1,ans);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
    set<vector<int>> ans;

    getallperm(nums,0,ans);
    vector<vector<int>> v(ans.begin(),ans.end());
        return v;
    }
};
