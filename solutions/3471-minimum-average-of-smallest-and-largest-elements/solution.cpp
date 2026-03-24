class Solution {
public:
    double minimumAverage(vector<int>& nums) {
    vector<double> avg;
    int n = nums.size();
    sort(nums.begin(),nums.end());
        
        for(int i=0; i<n/2; i++){
            avg.push_back(double(nums[i]+nums[n-i-1])/2);
        }
    double ans = INT_MAX;
        for(int i=0; i<avg.size(); i++){
            if(avg[i] < ans){
                ans = avg[i];
            }
        }
        return ans;
    }
};
