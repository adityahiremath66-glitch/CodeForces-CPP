class Solution {
public:
    int search(vector<int>& nums, int target) {
    int n = nums.size();
    int st = 0;
    int end = n-1;
    int x = 0;
        if(nums[0] == target){
            return 0;
        }
        if(nums[0] < nums[n-1]){
            while(st <= end){
                int mid = st+(end-st)/2;
                if(nums[mid] == target){
                    return mid;
                }
                else if(nums[mid] < target){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }
        while(st<=end){
            int mid = st+(end-st)/2;
            if(mid < n-1 && nums[mid] > nums[mid+1]){
                x = mid;
                end = mid;
                break;
            }
            else if(nums[mid] >= nums[0]){
                st = mid+1;
            }else{
                end = mid-1;
            }
            }
        
        
    st = 0;
        while(st <= end){
            int mid = st+(end-st)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
    st = x+1;
    end = n-1;
        while(st <= end){
            int mid = st+(end-st)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }

    return -1;
    }
};
