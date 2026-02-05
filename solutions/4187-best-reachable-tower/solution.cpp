class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
    int n = towers.size();
    vector<vector<int>> lex;
    vector<vector<int>> reach_twrs;
    vector<int> ans = {-1,-1};
        for(int i=0; i<n; i++){
            if(abs(towers[i][0]-center[0]) + abs(towers[i][1]-center[1]) <= radius){
                reach_twrs.push_back({towers[i][0],towers[i][1],towers[i][2]});
            }
        }
        if(reach_twrs.empty()){
            return ans;
        }
    int max_qf = INT_MIN;
    int max_qf_ind = 0;
        for(int i=0; i<reach_twrs.size(); i++){
            if(reach_twrs[i][2] > max_qf){
                max_qf = reach_twrs[i][2];
                max_qf_ind = i;
            }
        }
    ans[0] = reach_twrs[max_qf_ind][0];
    ans[1] = reach_twrs[max_qf_ind][1];
    for(int i=0; i<reach_twrs.size(); i++){
        if(reach_twrs[max_qf_ind][2] == reach_twrs[i][2]){
            lex.push_back({reach_twrs[i][0],reach_twrs[i][1],reach_twrs[i][2]});
            cout<<reach_twrs[i][0]<<"\t"<<reach_twrs[i][1]<<"\n";
        }
    }
    if(lex.size() == 1){
        return ans;
    }
    int small_coor1 = lex[0][0];
    int small_coor2 = lex[0][1];

        for(int i=1; i<lex.size(); i++){
            if(small_coor1 < lex[i][0] || (small_coor1 == lex[i][0] && small_coor2 < lex[i][1])){
                continue;
            }else{
                small_coor1 = lex[i][0];
                small_coor2 = lex[i][1];
            }
        }
    ans[0] = small_coor1;
    ans[1] = small_coor2;
    return ans;
    }
};
