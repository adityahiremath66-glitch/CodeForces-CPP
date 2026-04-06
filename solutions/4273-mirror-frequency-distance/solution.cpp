class Solution {
public:
    int mirrorFrequency(string s) {
    int n = s.length(),ans=0;
    vector<int> freq1(26,0),freq2(10,0);
    vector<int> mirr_pairs;
        for(int i=0; i<n; i++){
            if(isalpha(s[i])){
                freq1[s[i]-97]++;
            }else{
                freq2[s[i]-'0']++;
            }
        }
        for(int i=0; i<13; i++){
            mirr_pairs.push_back(abs(freq1[i] - freq1[26-i-1]));
        }
        for(int i=0; i<5; i++){
            mirr_pairs.push_back(abs(freq2[i] - freq2[10-i-1]));
        }
        for(int i=0; i<mirr_pairs.size(); i++){
            ans += mirr_pairs[i];
        }
    return ans;
    }
};
