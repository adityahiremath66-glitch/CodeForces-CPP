class Solution {
public:
    string greatestLetter(string s) {
    vector<int> freq_up(26,0);
    vector<int> freq_low(26,0);
    string ans;
    int great_letter = '@';
    string final_ans;
        for(int i=0; i<s.length(); i++){
            if(isupper(s[i])){
                freq_up[s[i] - 65]++;
            }
        }
        for(int i=0; i<s.length(); i++){
            if(islower(s[i])){
                freq_low[s[i] - 97]++;
            }
        }
        for(int i=0; i<26; i++){
            if(freq_up[i] > 0 && freq_low[i] > 0){
                char x = i+65;
                ans.push_back(x);
            }
        }
        for(int i=0; i<ans.length(); i++){
            if(great_letter < ans[i]){
                great_letter = ans[i];
            }
        }
    final_ans.push_back(great_letter);
    if(final_ans[0] == '@'){
        final_ans.pop_back();
    }
    return final_ans;
    }
};
