class Solution {
public:
    bool checkDivisibility(long long n) {
    long long a = n;
    long long b = n;
    long long dig_sum = 0;
    long long prod = 1;
        while(a != 0){
            long long x = a % 10;
            dig_sum += x;
            a /= 10;
        }
        while(b != 0){
            long long x = b % 10;
            prod *= x;
            b /= 10;
        }

        if(n % (prod+dig_sum) == 0){
            return 1;
        }
        return 0;
    }
};
