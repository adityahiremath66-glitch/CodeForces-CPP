class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int tar) {
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int p = j+1,q = n-1;
                while(p < q){
                    long long sum = (long long)nums[i]+(long long)nums[j]+(long long)nums[p]+(long long)nums[q]; 
                    if(sum == tar){
                        ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                        p++;
                        q--;
                    }else if(sum < tar){
                        p++;
                    }else{
                        q--;
                    }
                }
            }
        }
    set<vector<int>> s(ans.begin(),ans.end());
        for(auto x : s){
            for(auto y : x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
    vector<vector<int>> v(s.begin(),s.end());
        return v;
    }
};