class Solution {
public:
    string reversePrefix(string word, char ch) {
    int x,n = word.length();
        for(int i=0; i<n; i++){
            if(word[i] == ch){
                x = i+1;
                break;
            }
        }
        for(int i=0; i<x/2; i++){
            swap(word[i],word[x-i-1]);
        }
        return word;
    }
};
