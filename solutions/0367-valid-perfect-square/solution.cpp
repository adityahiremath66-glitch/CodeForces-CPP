class Solution {
public:
    bool isPerfectSquare(int num) {
    long long n = num/2;
    long long st = 2,end = n;
    if(num == 0 || num == 1){
        return true;
    }
        while(st<=end){
        long long mid = (st+end)/2;
        long long num_sq = mid * mid;
            if(num_sq == num){
                return true;
            }
            else if(num_sq < num){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return false;
    }
};
