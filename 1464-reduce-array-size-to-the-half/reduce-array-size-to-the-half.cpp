class Solution {
public:
    int minSetSize(vector<int>& arr) {
    int n = arr.size();
    map<int,int> mp;
    multimap<int,int> mp1;
    int sum = 0,ans = 0;
        for(auto x : arr){
            mp[x]++;
        }
        for(auto x : mp){
            mp1.insert({x.second,x.first});
        }
        for(auto it=mp1.rbegin(); it!=mp1.rend(); it++){
            if(sum >= n/2){
                break;
            }else{
                sum += it->first;
                ans++;
            }
        }
    return ans;
    }
};