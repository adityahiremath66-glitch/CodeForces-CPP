class Solution {
public:
    bool isUgly(int n) {
        if(n == 0){
            return 0;
        }
        vector<int> fac = {2,3,5};
        for(int i=0; i<3; i++){
            while(n % fac[i] == 0){
                n /= fac[i];
            }
        }
        if(n > 0 && n == 1){
            return 1;
        }
    return 0;
    }
};
