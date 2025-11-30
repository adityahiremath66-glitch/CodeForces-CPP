class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
    int n = sentence.length();
    vector<string> a;
    stringstream check1(sentence);
    string temp;
        while(getline(check1, temp, ' ')){
            a.push_back(temp);
        }
        for(int i=0; i<a.size(); i++){
            if(a[i].find(searchWord) == 0){                
                return i+1;
            }
        }
        return -1;
    }
};
