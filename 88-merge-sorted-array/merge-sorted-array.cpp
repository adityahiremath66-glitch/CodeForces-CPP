class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
    int j = 0;
        for(int i=m; i<m+n; i++){
            n1[i] = n2[j];
            j++;
        }
        sort(n1.begin(),n1.end());
    }
};