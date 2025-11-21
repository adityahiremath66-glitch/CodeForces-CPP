class Solution {
public:
    int totalMoney(int n) {
    int bal = 0;
        for(int i=0; i<n; i++){
             int mon = (i/7) + 1;
             int daily = i%7;
            bal = bal + mon + daily ;
        }
        return bal;
    }
};
