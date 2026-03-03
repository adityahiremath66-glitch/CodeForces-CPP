class Solution {
public:
    bool check(vector<int>& weights,int cap,int days){
        int curr_weight = 0;
        int req_days = 0;
        
        for(int i=0; i<weights.size(); i++) {
            if(weights[i] > cap){
                return 0;
            }
            if(curr_weight + weights[i] > cap) {
                req_days++;
                curr_weight = 0;
            }
            curr_weight += weights[i];
        }
        if(curr_weight > 0){
            req_days++;
        }
        if(req_days <= days){
            return 1;
        }
        return 0;
    }
    int shipWithinDays(vector<int>& weights, int days) {
    int n = weights.size();
    int st = 0,end=0;
    int ans;
    for(int i=0; i<n; i++){
        end += weights[i]; 
    }
        while(st <= end){
            int mid = (st+end)/2;
            if(check(weights,mid,days)){
                end = mid-1;
                ans = mid;
            }else{
                st = mid+1;
            }
        }
        return ans;
    }
};
