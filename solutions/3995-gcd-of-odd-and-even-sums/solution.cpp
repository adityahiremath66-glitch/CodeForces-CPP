class Solution {
public:
    int gcd(int a,int b){
        while(a != b){
            if(a < b){
                b -= a;
            }else{
                a -= b;
            }
        }
        return a+1;
    }
    int gcdOfOddEvenSums(int n){
    int even_sum = 0,odd_sum = 0;
    int i = 2,j = 1;
    --n;
        while(n){
            even_sum += i; odd_sum += j;
            i += 2;
            j += 2;
            --n;
        }
    return gcd(even_sum,odd_sum);
    }
};
