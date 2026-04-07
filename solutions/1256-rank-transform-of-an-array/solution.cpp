class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
    int n = arr.size();
    vector<int> nums(arr.begin(),arr.end()),ans;
    sort(nums.begin(),nums.end());
    map<int,int> mp;
    int i = 1;
        for(int j=0; j<n; j++){
            if(j>0 && nums[j] == nums[j-1]){
                i--;
                mp[nums[j]] = i;
            }else{
                mp[nums[j]] = i;
            }
            i++;
        }
        for(int i=0; i<n; i++){
            ans.push_back(mp[arr[i]]);
        }


    return ans;
    }
};
