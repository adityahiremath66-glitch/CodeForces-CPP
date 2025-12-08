class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
        for(int i=0; i<n; i+=2){
            int freq = nums[i];
            int x = nums[i+1];
            for(int j=0; j<freq; j++){
                ans.push_back(x);
            }
        }
        return ans;
    }
};
