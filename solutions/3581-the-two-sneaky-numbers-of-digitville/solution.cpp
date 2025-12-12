class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    vector<int> freq(105,0);
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }   
        for(int i=0; i<freq.size(); i++){
            if(freq[i] > 1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
