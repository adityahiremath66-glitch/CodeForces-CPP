class Solution {
public:
    int differenceOfSums(int n, int m) {
    int sum1 = 0;
    int sum2 = 0;
    int tot_sum = (n*(n+1))/2;
        for(int i=1; i<=n; i++){
            if(i % m != 0){
                sum1 += i;
            }
        }
    sum2 = tot_sum - sum1;
    return (sum1 - sum2);
    }
};
