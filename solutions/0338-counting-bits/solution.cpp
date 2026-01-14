class Solution {
public:
    vector<int> countBits(int n) {
    vector<int> ans;
        for(int i=0; i<=n; i++){
            int count_i = 0;
            int x = i;
            while(x){
                x = x & (x-1);
                count_i++;
            }
        ans.push_back(count_i);
        }
        
        return ans;
    }
};
