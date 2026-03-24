class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    int n = nums.size();
    map<int,int> mp;
    multimap<int,int> mp1;
    vector<int> ans;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(auto x : mp){
            mp1.insert({x.second,x.first});
        }
        for(auto it=mp1.rbegin(); it!=mp1.rend(); it++){
            if(k == 0) break;
            ans.push_back(it->second);
            k--;
            cout<<it->first<<"->"<<it->second<<"\n";
        }

    return ans;
    }
};
