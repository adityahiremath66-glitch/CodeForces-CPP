class Solution {
public:
    void all_sub(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>> &allsub){
        if(i == nums.size()){
            allsub.push_back(ans);
            return;
        }
    //include
    ans.push_back(nums[i]);
    all_sub(nums,ans,i+1,allsub);

    ans.pop_back();

    //exclude
    all_sub(nums,ans,i+1,allsub);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> allsub;
    vector<int> ans;

    all_sub(nums,ans,0,allsub);
        return allsub;
    }
};
