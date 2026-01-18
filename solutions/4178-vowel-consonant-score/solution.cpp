class Solution {
public:
    int vowelConsonantScore(string s) {
    int n = s.length();
    int vowels = 0;
    int consonants = 0;
        for(int i=0; i<n; i++){
            if(s[i] == ' ' || isdigit(s[i])){
                continue;
            }
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] ==             'o' || s[i] == 'u'){
                vowels++;
            }else{
                consonants++;
            }
        }
        if(vowels == 0 || consonants == 0){
            return 0;
        }
    return floor(vowels/consonants);
    }
};
