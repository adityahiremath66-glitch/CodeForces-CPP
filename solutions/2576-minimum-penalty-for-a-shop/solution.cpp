class Solution {
public:
    int bestClosingTime(string cust) {
    int n = cust.size();

        vector<int> prefixN(n+1, 0);
        vector<int> suffixY(n+1, 0);

        for(int i=1; i <= n; i++){
            prefixN[i] = prefixN[i-1] + (cust[i - 1] == 'N');
        }
        for(int i=n-1; i >= 0; i--){
            suffixY[i] = suffixY[i+1] + (cust[i] == 'Y');
        }

        int minPen = INT_MAX;
        int bestHour = 0;

        for (int i = 0; i <= n; i++) {
            int penalty = prefixN[i] + suffixY[i];
            if(penalty < minPen){
                minPen = penalty;
                bestHour = i;
            }
        }

        return bestHour;
    }
};
