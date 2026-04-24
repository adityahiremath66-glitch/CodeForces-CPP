class Solution {
public:
    int minimumAddedInteger(vector<int>& n1, vector<int>& n2) {
    int n = n1.size();
    int mini = INT_MAX;
    sort(n1.begin(),n1.end());
    sort(n2.begin(),n2.end());
        for(int i=0; i<n ; i++){
            for(int j=i+1; j<n; j++){
                vector<int> n3;
                for(int k=0 ; k<n ; k++){
                    if(i != k && j != k){
                        n3.push_back(n1[k]);
                    }
                }
                set<int> diffs;
                for(int k=0 ; k<n-2 ; k++){
                    diffs.insert(n2[k] - n3[k]);
                }
                if(diffs.size() == 1) {
                    mini = min(mini,n2[0] - n3[0]);
                }
            }
        }
        return mini;
    }
};
