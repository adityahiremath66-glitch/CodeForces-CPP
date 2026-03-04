class Solution {
public:
    bool check(char s){
        if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U'){
            return 1;
        }
        return 0;
    }

    string toGoatLatin(string sentence) {
    int n = sentence.length();
    stringstream ss(sentence);
    vector<string> vec;
    char x;
    int words = 1;
        while(getline(ss, sentence, ' ')){
            vec.push_back(sentence);
        }
        for(int i=0; i<vec.size(); i++){
            for(int j=0; j<vec[i].size(); j++){
                if(check(vec[i][j])){
                    vec[i] += "ma";
                    for(int l=0; l<words; l++){
                        vec[i] += 'a';
                    }
                    words++;
                    break;
                }else{
                    x = vec[i][j];
                    vec[i].erase(0,1);
                    vec[i] += x;
                    vec[i] += "ma";
                for(int k=0; k<words; k++){
                    vec[i] += 'a';
                }
                words++;
                break;
                }
            }
        }
    string ans;
        for(int i=0; i<vec.size(); i++){
            ans += vec[i];
            if(i != vec.size()-1){
                ans += ' ';
            }
        }
        
    return ans;
    }
};
