class Solution {
public:
    int countCommas(int n){
        if(n < 1000) return 0;
    int x = 1000;
    int ans = 0;
        while(x != n+1){
            ans += 1;
            x++;
        }
        return ans;
    }
};
