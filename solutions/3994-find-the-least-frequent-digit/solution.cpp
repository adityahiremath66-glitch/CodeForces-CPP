class Solution {
public:
    int getLeastFrequentDigit(long long n) {
        vector<int> freq(10,0);
        long long a = n;
        int min_Freq = INT_MAX;
        int ans = 0;
        
        while(a > 0) {
            int d = a % 10;
            freq[d]++;
            a /= 10;
        }
        for (int i=0; i<=9; ++i) {
            if (freq[i] > 0 && freq[i] < min_Freq) {
                min_Freq = freq[i];
                ans = i;
            }
        }

        return ans;
    }
};
