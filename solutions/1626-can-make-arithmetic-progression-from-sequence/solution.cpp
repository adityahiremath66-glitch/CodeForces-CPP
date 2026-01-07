class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans;
        sort(arr.begin(),arr.end());
        for(int i=0; i<n-1; i++){
            ans.push_back(abs(arr[i]-arr[i+1]));
        }
        for(int i=0; i<ans.size()-1; i++){
            if(ans[i] != ans[i+1]){
                return false;
            }
        }
        return true;
    }
};
