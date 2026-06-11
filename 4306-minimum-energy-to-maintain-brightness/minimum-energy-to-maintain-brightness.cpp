class Solution {
public:
    long long minEnergy(int n, int b, vector<vector<int>>& intr) {
    int x = intr.size();
    sort(intr.begin(),intr.end());
    vector<vector<int>> mer;
    vector<int> temp = intr[0];
        for(int i=1; i<x; i++){
            if(intr[i][0] <= temp[1]){
                temp[1] =  max(temp[1],intr[i][1]);
            }else{
                mer.push_back(temp);
                temp = intr[i];
            }
        }
        mer.push_back(temp);
    long long min_ene = 0;
        for(int i=0; i<mer.size(); i++){
            min_ene += (mer[i][1]-mer[i][0]) + 1;
        }
        long long c = 0;
        if(b % 3 != 0){
            c = b/3;
            c++;
        }else {
            c = b/3;
        }
        return c*min_ene;
    }
};