class Solution {
public:
    int mirrorDistance(int n) {
    int rev_num = 0;
    int x = n;
        while(x != 0){
            int dig = x % 10;
            rev_num = rev_num * 10 + dig; 
            x /= 10;                     
        }

    return abs(n-rev_num);      
    
    }
};
