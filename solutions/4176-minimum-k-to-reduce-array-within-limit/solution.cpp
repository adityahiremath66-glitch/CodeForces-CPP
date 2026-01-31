class Solution {
public:
    int min_opr(vector<int>& nums,int k){
    int tot_count = 0;
        for(int i=0;i<nums.size();i++){
            tot_count += ceil((double)nums[i]/k);
        }
        return tot_count;
    }
    int minimumK(vector<int>& nums) {
        int n = nums.size();
        int x = INT_MIN;
        int z = INT_MAX;
        int ind = 0;

        for(int i=0; i<n; i++){
            x = max(x,nums[i]);
        }
        long long st = 0,end = 1e5+5,ans = 0;
            while(st<=end){
                long long mid = (st+end)/2;
            if(mid>0 && (min_opr(nums,mid) <= mid*mid)){
                end = mid-1;
                ans=mid;
            }else{
                st = mid + 1;
            }
            }
        return ans;
        // // vector<int> v;
        // for(int i=0;i<n;i++){
        //     int count = 0;
        //     count = ceil((double)nums[i]/k);
        //     nums[i] -= k*count;
        //     v.push_back(count);
        // }

        // for(int i=0;i<n;i++){
        //     if(nums[i]<z){
        //         z = nums[i];
        //         ind = i;
        //     }
        // }

        // return v[ind];
    }
};
