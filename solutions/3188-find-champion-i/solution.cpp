class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
    int n = grid.size();

        for(int i = 0; i < n; i++) {
            bool champ = true;
            for(int j = 0; j < n; j++) {
                if (j != i && grid[j][i] == 1) {
                    champ = false;
                    break;
                }
            }
            if (champ) {
                return i;
            }
        }

        return -1;
    }
};
