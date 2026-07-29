class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();
    int st = 0, end = n-1;
    int ans = 0;
        while(st <= end){
            int mid = st + (end-st)/2;
                if(mid-1 >= 0 && mid+1 <= n-1 && arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
                    ans = mid;
                    break;
                }else if(mid+1<=n-1 && arr[mid+1] > arr[mid]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
        }
        return ans;
    }
};