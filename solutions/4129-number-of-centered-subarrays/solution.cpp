class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
    int n = nums.size();
    int cent_sub = 0;

    for(int st=0; st<n; st++){
        long long curr_sum = 0;
        set<int> s1;
        for(int end=st; end<n; end++) {
            curr_sum += nums[end];
            s1.insert(nums[end]);
        bool isFound = false;
        for(int num : s1){
            if(num == curr_sum) {
                isFound = true;
                    break; 
            }
        }
            if(isFound){
                cent_sub++;
            }
        }
    }
    return cent_sub;
    }
};
