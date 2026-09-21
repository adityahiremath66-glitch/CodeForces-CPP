class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
    int n = nums.size();
    int ans = 0;
    map<int,vector<int>> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]].push_back(i);
        }
        for(auto x : mp){
            for(auto y : x.second){
                cout<<y<<" ";
            }
            cout<<endl;
        }
        for(auto x : mp){
            if(x.second.size() == 3){
                if(x.second[1] - x.second[0] == x.second[2] - x.second[1]){
                    ans++;
                }
            }
        }
        
        return ans;
    }
};