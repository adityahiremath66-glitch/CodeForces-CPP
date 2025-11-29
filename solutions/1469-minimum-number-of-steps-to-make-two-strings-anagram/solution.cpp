class Solution {
public:
    int minSteps(string s, string t) {
    vector<int> freq1(26,0);
    vector<int> freq2(26,0);
    int n = s.length();
    int min_steps = 0;
        for(int i=0; i<n; i++){
            freq1[s[i] - 97]++;
        }
        for(int i=0; i<n; i++){
            freq2[t[i] - 97]++;
        }
        
        for(int i=0; i<26; i++){
            if(freq2[i] != freq1[i]){
                min_steps += abs(freq2[i]-freq1[i]);
            }   
            
        } 
        return min_steps/2;
    }
};
