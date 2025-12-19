class Solution {
public:
    vector<int> constructArray(int n, int k) {
    vector<int> ans;
        int st = 1, end = n;

        for(int i = 0; i < k; i++) {
            if(i % 2 == 0) {
                ans.push_back(st++);
            } else {
                ans.push_back(end--);
            }
        }
        
        if(k % 2 == 1) {
            for(int i = st; i <= end; i++) {
                ans.push_back(i);
            }
        }else{
            for(int i = end; i >= st; i--) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

