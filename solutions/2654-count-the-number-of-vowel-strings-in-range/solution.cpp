class Solution {
public:
    bool check(char s){
        if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
            return 1;
        }
        return 0;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
    int n = words.size();
    int ans = 0;
        
        for(int i=left; i<=right; i++){
            for(int j=0; j<words[i].size(); j++){
                if(check(words[i][j]) && check(words[i][words[i].size()-1])){
                    ans++;
                    break;
                }else{
                    break;
                }
            }
        } 
        return ans;
    }
};
