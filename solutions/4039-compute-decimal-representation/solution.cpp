class Solution {
public:
    vector<int> decimalRepresentation(int n) {
    int x = n;
    vector<int> ans;
        for(int i=0; i<=log(n)+1; i++){
            if(x){
                int rem = x % 10;
                if(rem){
                    ans.push_back(rem*pow(10,i));
                }
                x /= 10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
