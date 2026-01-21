class Solution {
public:
    int minMoves(vector<int>& nums) {
    int n = nums.size();
    int moves = 0;
    int max_ele = 0;
        for(int i=0; i<n; i++){
            max_ele = max(max_ele,nums[i]);
        }    
        for(int i=0; i<n; i++){
            moves += abs(max_ele - nums[i]);
        }
        return moves;
    }
};
