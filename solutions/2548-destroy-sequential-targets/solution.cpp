//#define long long ll
class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
    int n = nums.size(),x = INT_MAX;
    map<int,vector<int>> mp;
    vector<int> v,v1;
        if(n == 1){
            return nums[0];
        }
        for(int i=0; i<n; i++){
            //if(find(nums.begin(),nums.end(),nums[i] % space) != nums.end()){
                mp[nums[i] % space].push_back(nums[i]);
            
        }
        for(auto x:mp){
            cout<<x.first<<"\t -> \t";
            for(auto y:x.second){
                cout<<y<<"\t";
            }
            cout<<"\n";
        }
        if(mp.empty()){
            for(int i=0; i<n; i++){
                x = min(x,nums[i]);
            }
            return x;
        }
        for(auto x : mp){
            v.push_back(x.second.size());
        }
    int mx = INT_MIN;
        for(auto x : v){
            mx = max(mx,x);
        }
    int mn = INT_MAX;
        for(auto x : mp){
            if(x.second.size() == mx){
                for(auto y : x.second){
                    mn = min(mn,y);
                }
            }
        }
    
    
        return mn;
    }
};
