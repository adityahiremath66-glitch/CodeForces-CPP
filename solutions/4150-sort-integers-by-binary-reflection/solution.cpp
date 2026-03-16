class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {
    int n = nums.size(),y=0;
    multimap<pair<int,int>,int> mp;
    vector<int> ans;
        for(int i=0; i<n; i++){
            int x = nums[i];
            string bin;
            while(x){
                int rem = x % 2;
                bin.push_back(rem+'0');
                x /= 2;
            }
            if(bin.empty()){
                bin = "0";
            }
        y = stoi(bin, nullptr, 2);
            mp.insert({{y, nums[i]}, nums[i]});
        }
        for(auto x : mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
