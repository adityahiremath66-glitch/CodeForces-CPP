class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& a, int k) 
    {
    int n=a.size(),ans=0,l=1;
    for(int i=0; i<n; i++){
        a.push_back(a[i]);
    }
        for(int i=1; i<n+k-1; i++){
            if(a[i]==a[i-1]){
                if(l>=k){
                    ans += l-k+1;
                }
                l = 1;
            }
            if(a[i]!=a[i-1]){
                l++;
            }
        }  
        if(l >= k){
            ans += l-k+1;
        }
    return ans;
    }
};
