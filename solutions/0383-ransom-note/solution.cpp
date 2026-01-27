class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    vector<int> freq1(26,0);
    vector<int> freq2(26,0);
        for(int i=0; i<ransomNote.length(); i++){
            freq2[ransomNote[i]-97]++;
        }
        for(int i=0; i<magazine.length(); i++){
            freq1[magazine[i]-97]++;
        }
        for(int i=0; i<26; i++){
            if(freq2[i] > freq1[i]){
                return false;
            }
        }
        return true;
    }
};
