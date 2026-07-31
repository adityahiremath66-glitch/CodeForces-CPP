class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int tar) {
    int n = m.size();
    int idx = 0,st = 0, end = n-1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(tar == m[mid][0]){
                return 1;
            }else if(m[mid][0] > tar){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
    st = 0,end = n-1;
        if(tar > m[n-1][0]){
            idx = n-1;
        }else{
        while(st <= end){
            int mid = st + (end-st)/2;
            if(mid-1 >= 0 && tar < m[mid][0] && tar > m[mid-1][0]){
                idx = mid-1;
                break;
            }else if(mid-1 >= 0 && tar > m[mid][0] && tar > m[mid-1][0]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        }
        return binary_search(m[idx].begin(),m[idx].end(),tar);
        
    }
};