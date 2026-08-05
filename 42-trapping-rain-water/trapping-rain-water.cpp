class Solution {
public:
    int trap(vector<int>& h) {
    int n = h.size();
    vector<int> l(n,0),r(n,0);
    l[0] = h[0];
    r[n-1] = h[n-1];
        for(int i=n-2; i>=0; i--){      //right most tallest
            r[i] = max(h[i],r[i+1]);
        }

        for(int i=1; i<n; i++){         //left most tallest
            l[i] = max(l[i-1],h[i]);
        }
    int ans = 0;
        
        for(int i=0; i<n; i++){
            int water = min(r[i],l[i]) - h[i];
            ans += water;
            
        }
        return ans;
    }
};