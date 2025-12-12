class Solution {
public:
    bool isfreqsame(int freq[],int windfreq[]){
        for(int i=0; i<26; i++){
            if(freq[i] != windfreq[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
    int freq[26] = {0};
        for(int i=0; i<s1.length(); i++){
            freq[s1[i] - 97]++;
        }
    int wind_size = s1.length();

        for(int i=0; i<s2.length(); i++){
            int wind_idx = 0;
            int idx = i;
            int windfreq[26] = {0};
            while(wind_idx < wind_size && idx < s2.length()){
                windfreq[s2[idx] - 97]++;
                wind_idx++;  idx++;
            }
            if(isfreqsame(freq,windfreq)){
                return true;
            }
        }

    return false;
    }
};
