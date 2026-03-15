class Solution {
public:
    vector<int> minOperations(string b) {
    int n = b.size();
    vector<int> pre(n,0),suff(n,0),ans(n,0);
    int cnt = (b[0] == '1' ? 1 : 0);

        for(int i=1; i<n; i++){
            pre[i] = pre[i-1] + cnt;
            cnt += (b[i] == '1' ? 1 : 0);
        }
    cnt = (b[n-1] == '1') ? 1 : 0;
        for(int i=n-2; i>=0; i--){
            suff[i] = suff[i+1] + cnt;
            cnt += (b[i] == '1' ? 1 : 0);
        }
        for(int i=0; i<n; i++){
            ans[i] = pre[i]+suff[i];
        }
        return ans;
    }
};
