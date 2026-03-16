class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    vector<int> freq(n+1,0);
    int miss,rep;
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        for(int i=1; i<freq.size(); i++){
            if(freq[i] == 2){
                rep = i;
            }
            if(freq[i] == 0){
                miss = i;
            }
        }
        return {rep,miss};
    }
};
