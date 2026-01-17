class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
    int n = hours.size();
    int pairs = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if((i < j) && (hours[i]+hours[j]) % 24 == 0){
                    pairs++;
                }
            }
        }
        return pairs;
    }
};
