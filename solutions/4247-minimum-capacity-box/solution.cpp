class Solution {
public:
    int minimumIndex(vector<int>& cap, int item) {
    int n = cap.size();
    multimap<int,int> mp;
        for(int i=0; i<n; i++){
            mp.insert({cap[i],i});
        } 
        for(auto x : mp){
            if(x.first >= item){
                return x.second;
            }
        }
        return -1; 
    }
};
