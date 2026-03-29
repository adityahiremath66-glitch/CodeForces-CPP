class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
    int n = nums.size();
    map<int,int> mp,mp1;
    vector<int> a;
        for(auto x : nums){
            mp[x]++;
        }
        for(auto x : mp){
            a.push_back(x.first);
        }
        for(int i=0; i<a.size(); i++){
            for(int j=i+1; j<a.size(); j++){
                if(a[i] < a[j] && mp[a[i]] != mp[a[j]]){
                    return {a[i],a[j]};
                }
            }
        }
        return {-1,-1};
    }
};
