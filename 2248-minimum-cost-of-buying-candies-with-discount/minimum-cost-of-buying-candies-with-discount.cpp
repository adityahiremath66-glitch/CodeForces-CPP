class Solution {
public:
    int minimumCost(vector<int>& cost) {
    int n = cost.size();
    int tot = 0;
    sort(cost.begin(),cost.end());
        for(auto x : cost){
            tot += x;
        }
        for(int i=n-1; i>=0; i--){
            if(i-1>=0 && i-2>=0 && min(cost[i],cost[i-1]) >= cost[i-2]){
                tot -= cost[i-2];
                i-=2;
            }
        } 
    return tot;
    }
};