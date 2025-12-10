class Solution {
public:
    int subtractProductAndSum(long long n) {
    long long sum = 0;
    long long product = 1;
    long long a = n;
        while(a != 0){
        long long x = a % 10;
            sum += x;
            a /= 10;
        }
        while(n != 0){
        long long x = n % 10;
            product *= x;
            n /= 10;
        }
    
    return product - sum;
    }
};
