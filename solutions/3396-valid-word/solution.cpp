class Solution {
public:
    bool isvowel(char a){
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
            return 1;
        }else{
            return 0;
        }
    }
    bool isValid(string word) {
    int n = word.length();
    int vowel_cnt=0,conso_cnt=0;
        for(int i=0; i<n; i++){
            if(!isalnum(word[i])){
                return false;
            }
            if(isvowel(word[i])){
                vowel_cnt++;
            }
            if(!isvowel(word[i]) && !isdigit(word[i])){
                conso_cnt++;
            }
        }
    return vowel_cnt && conso_cnt && n>=3;
    }
};
