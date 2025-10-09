// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(long long n) {
    long long st = 1;
    long long end = n;
    long long ans = 0;
        while(st<=end){
        long long mid = (st+end)/2;
            if(isBadVersion(mid) && !isBadVersion(mid-1)){
                ans = mid;
            }
            if(!isBadVersion(mid)){
                st = mid + 1;
            }
            else if(isBadVersion(mid)){
                end = mid - 1;
            }
        }
        return ans;
    }
};
