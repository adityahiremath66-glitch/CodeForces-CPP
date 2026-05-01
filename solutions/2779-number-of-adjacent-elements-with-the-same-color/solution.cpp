class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
    vector<int> nums(n, 0), res;
    int c = 0;

    for(auto x : queries) {
        int ind = x[0], color = x[1];
        int pre = (ind > 0) ? nums[ind - 1] : 0;
        int nex = (ind < n-1) ? nums[ind + 1] : 0;

        if (nums[ind] && nums[ind] == pre) c--;
        if (nums[ind] && nums[ind] == nex) c--;
        nums[ind] = color;
        if (nums[ind] == pre) c++;
        if (nums[ind] == nex) c++;

        res.push_back(c);
    }
    return res;
    }
};
