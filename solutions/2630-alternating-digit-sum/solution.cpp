class Solution {
public:
    int alternateDigitSum(int n) {
    int x = n,i = floor(log10(n))+1,sum=0;
    
        while(x){
            int rem = x % 10;
                if(i % 2 == 1){
                    sum += rem;
                }else{
                    sum += (rem*-1);
                }
            x /= 10;
            i--;
        }
    return sum;
    }
};
