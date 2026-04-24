class Solution {
public:
    int addedInteger(vector<int>& n1, vector<int>& n2) {
    sort(n2.begin(),n2.end());
    sort(n1.begin(),n1.end());
        return n2[0]-n1[0];
    }
};
