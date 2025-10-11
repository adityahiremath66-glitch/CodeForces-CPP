class Solution {
public:
    int arrangeCoins(int n) {
    long long tot_sum = n;
    int row_count = 0;
        for(int i=1; tot_sum>=0; i++){
            if(tot_sum > 0){
                tot_sum -= i;
                row_count++;
            }
            if(tot_sum == 0){
                return row_count;
            }
            if(tot_sum < 0){
                break;
            }
        }
    return row_count-1;
    }
};
