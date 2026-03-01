class Solution {
public:
    int minPartitions(string n) {
    int ans = 0;
    int x = n.length();

        for(int i=0; i<x; i++){
            ans = max(ans,n[i]-'0');
        }
        return ans;
    }
};
