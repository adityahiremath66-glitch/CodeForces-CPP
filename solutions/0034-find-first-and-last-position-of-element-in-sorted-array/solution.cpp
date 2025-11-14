class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    long long n = nums.size();
    long st = 0,end = n-1;
    vector<int> a = {-1,-1};

    if(nums.empty()) return a;

        while(st <= end){
        long long mid= st+(end-st)/2;
            if(nums[mid] == target){
                a[0] = mid;
                end = mid - 1;
            }
            else if(nums[mid] < target){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    if(a[0] == -1){
        return a;
    }
st = 0;
end = n-1;
    
    while(st <= end){
        long long mid = st+(end-st)/2;
            if(nums[mid] == target){
                a[1] = mid;
                st = mid + 1;
            }
            else if(nums[mid] < target){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }

        return a;
    }
};
