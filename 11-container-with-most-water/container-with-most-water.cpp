class Solution {
public:
    int maxArea(vector<int>& h) {
    int n = h.size();
    int i = 0,j = n-1;
    int ans = -1;
        while(i < j){
            if(h[i] < h[j]){
                ans = max(ans,(j-i)*min(h[i],h[j]));
                i++;
            }else{
                ans = max(ans,(j-i)*min(h[i],h[j]));
                j--;
            }
        }
        return ans;
    }
};