class Solution {
public:
    vector<int> maxKDistinct(vector<int>& num, int k) {
    int n = num.size();
    set<int,greater<int>> nums(num.begin(),num.end());
    vector<int> ans;
    int i=0;
        for(auto x : nums){
            if(i == k){
                break;
            }
            ans.push_back(x);
            i++;
        }
    return ans;
    }
};
