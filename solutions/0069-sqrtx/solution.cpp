class Solution {
public:
    int mySqrt(int x) {
        long long st = 0;
    long long end = x,ans=0;
        while(st<=end){
        long long mid = (st+end)/2;
        long long num_sq = mid*mid;
            if(num_sq == x){
                return mid;
            }
             if(num_sq < x){
                st = mid+1;
                ans=mid;
            }else{
                end = mid-1;
            }
        }
        
        return ans;
    }
};
