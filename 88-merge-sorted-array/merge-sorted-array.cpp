class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
    int i = m-1,j = n-1,idx=m+n-1;
        while(i>=0 && j>=0){
            if(n1[i] > n2[j]){
                n1[idx] = n1[i];
                idx--;
                i--;
            }else{
                n1[idx] = n2[j];
                idx--;
                j--;
            }
        }
        while(j >= 0){
            n1[idx] = n2[j];
            idx--;
            j--;
        }
    }
};