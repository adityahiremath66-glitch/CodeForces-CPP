class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
    int n = score.size();
    priority_queue<pair<int,int>> pq;
    vector<string> ans(n);
        for(int i=0; i<n; i++){
            pq.push({score[i],i});
        }
        for(int i=1; i<=n; i++) {
            int idx = pq.top().second;
            pq.pop();
            if(i == 1){ 
                ans[idx] = "Gold Medal";
            }else if(i == 2){ 
                ans[idx] = "Silver Medal";
            }else if(i == 3){
                ans[idx] = "Bronze Medal";
            }else{
                ans[idx] = to_string(i);
            }
        }
    return ans;    
    }
};
