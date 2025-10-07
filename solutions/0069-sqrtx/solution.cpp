class Solution {
public:
    int mySqrt(int x) {
    long long st = 1;
    if(x<=1)
    return x;
    long long end = x/2,ans=0;
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
