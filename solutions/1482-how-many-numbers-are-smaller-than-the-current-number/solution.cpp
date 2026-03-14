class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    int n = nums.size();
    vector<int> freq(105,0);
    vector<int> ans;
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        for(int i=1; i<freq.size(); i++){
            freq[i] += freq[i-1];
        }
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                ans.push_back(0);
            }else{
                ans.push_back(freq[nums[i]-1]);
            }
        }
        return ans;
    }
};
