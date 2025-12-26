class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    int n = A.size();
    vector<int> ans;
        for(int i=0; i<n; i++){
            vector<int> freq1(51,0);
            vector<int> freq2(51,0);
            for(int j=0; j<=i; j++){
                freq1[A[j]]++;
                freq2[B[j]]++;
            }
            int pre_count = 0;
            for(int k=0; k<freq1.size(); k++){
                if((freq1[k] > 0) && (freq2[k] > 0)){
                    pre_count++;
                }
            }
        ans.push_back(pre_count);
        }
        return ans;    
    }
};
