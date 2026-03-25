class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
    int n = ranges.size();
        for(int i=left; i<=right; i++){
            bool check = false;
            for(int j=0; j<n; j++){
                if(ranges[j][0] <= i && i <= ranges[j][1]){
                    check = true;
                    break;
                }
            }
            if(!check){
                return 0;
            }
        }
        return 1;
    }
};
