class Solution {
public:
    int numRescueBoats(vector<int>& ppl, int lim) {
    int n = ppl.size();
        sort(ppl.begin(), ppl.end());

        int st = 0;
        int end = n - 1;
        int boats = 0;

        while(st <= end){

            if(ppl[st] + ppl[end] <= lim){
                st++;
                end--;
            }
            else{
                end--;
            }

            boats++;
        }

        return boats;
    }
};
