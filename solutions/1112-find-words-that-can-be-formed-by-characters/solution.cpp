class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
    vector<int> freqChars(26, 0);
    int ans = 0;
        for(char c : chars) {
            freqChars[c - 97]++;
        }
        for(string x : words) {
            vector<int> freqWord(26, 0);
            bool good = true;
            for(char c : x) {
                freqWord[c - 'a']++;
                if(freqWord[c - 97] > freqChars[c - 97]) {
                    good = false;
                    break;
                }
            }
            if(good){
                ans += x.length();
            }
        }

        return ans;
    }
};
