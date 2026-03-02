class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
    int n = grid.size();
    int tot_per = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<grid[i].size(); j++){
                int curr_per = 4;
                if(grid[i][j] == 0){
                    continue;
                }
                if(j+1<grid[i].size() && grid[i][j] == 1 && grid[i][j+1] == 1){
                    --curr_per;
                }
                if(i+1<n && grid[i][j] == 1 && grid[i+1][j] == 1){
                    --curr_per;
                }
                if(j-1 >=0 && grid[i][j] == 1 && grid[i][j-1] == 1){
                    --curr_per;
                }
                if(i-1>=0 && grid[i][j] == 1 && grid[i-1][j] == 1){
                    --curr_per;
                }
                tot_per += curr_per;
            }
        } 
        return tot_per;
    }
};
