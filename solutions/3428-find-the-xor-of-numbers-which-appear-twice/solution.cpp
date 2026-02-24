class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
    int n = nums.size();
    vector<int> freq(55,0);
    int bit_xor = 0;
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }    
        for(int i=1; i <=50; i++){
            if(freq[i] > 1){
                bit_xor ^= i;
            }
        }
    return bit_xor;
    }
};
