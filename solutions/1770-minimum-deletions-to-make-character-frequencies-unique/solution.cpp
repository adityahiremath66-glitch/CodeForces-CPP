class Solution {
public:
    int minDeletions(string s) {
    int n = s.length();
    vector<int> freq(26,0);
    int cnt = 0;
        for(int i=0; i<n; i++){
            freq[s[i]-97]++;
        }
        for(int i=0; i<26; i++){
            if(freq[i]){
                cout<<freq[i]<<"\n";
            }
        }
    sort(freq.begin(),freq.end(), greater<int>());
        for(int i=0; i<26; i++){
            for(int j=0; j<26; j++){
                if(freq[i] == freq[j] && i != j && freq[i] && freq[j]){
                    freq[j] -= 1;
                    cnt++;
                }
            }
        }
    return cnt;
    }
};
