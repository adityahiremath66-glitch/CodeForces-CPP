class Solution {
public:
    int pivotInteger(int n) {
    long long sum = (n*(n+1))/2;
    int x = 1;
        while(x <= n){
            long long pre_sum = (x*(x+1))/2;
            long long suff_sum = (sum - pre_sum) + x;
                if(suff_sum == pre_sum){
                    return x;
                }
                x++;
        }
        return -1; 
    }
};
