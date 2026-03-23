class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        vector<int> a;
        int cnt = 0;
        for(int i=0; i<n; i++){
           if(nums[i] == 1){
            cnt++;
           }
           if(nums[i] == 0 || (i == n-1 && nums[i] == 1)){
             a.push_back(cnt);
             cnt = 0;
           }
        }
        int m = a.size();
        int max = a[0];
        for(int i=1; i<m; i++){
            cout<<a[i]<<"\n";
             if(a[i]>max){
                max = a[i];
             }
        }
        return max;
    }
};
