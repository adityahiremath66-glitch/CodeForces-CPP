class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
    int n = nums.size();
    int x = -1;
    int drops = 0;
        for(int i=0; i<n-1; i++){
            if(nums[i] > nums[i+1]){
                drops++;
                x = i;
            }
        } 
        if(drops == 0){
            return 0;
        } 
        if(nums[0] < nums[n-1]){
            return -1;
        }  
        else if(drops > 1){
            return -1;
        }else
    
        return (n - (x + 1));
    }
};
