class Solution {
public:
    void getallsub(vector<int>& nums,set<vector<int>> &allsub,vector<int> &ans,int i){
        if(i == nums.size()){
            allsub.insert(ans);
            return;
        }
    ans.push_back(nums[i]);
    getallsub(nums,allsub,ans,i+1);

    ans.pop_back();
    getallsub(nums,allsub,ans,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    set<vector<int>> allsub;
    vector<int> ans;
    sort(nums.begin(),nums.end());
    getallsub(nums,allsub,ans,0);
    cout<<allsub.size();
    vector<vector<int>> v(allsub.begin(),allsub.end());
        return v;
    }
};
