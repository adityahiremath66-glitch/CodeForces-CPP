class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
    int n = arr.size();
    multimap<int, int> mp;
    vector<int> ans;
    sort(arr.begin(),arr.end());
        for(int i=0; i<n; i++){
            int x = arr[i];
            int cnt = 0;
            while(x){
                x = x & (x-1);
                cnt++;
            }
            mp.insert({cnt,arr[i]});
        }   
        for(auto x : mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
