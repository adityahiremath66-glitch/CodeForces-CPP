class Solution {
public:
    int maxFreqSum(string s) {
    int n = s.length();
    map<char,int> mp1;
    map<char,int> mp2;
        for(int i=0; i<n; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                mp1[s[i]]++;
            }else{
                mp2[s[i]]++;
            }
        }
        if(mp1.empty() && mp2.empty()){
            return 0;
        }
    int max_1 = 0,max_2 = 0;
    for(auto x : mp1){
        max_1 = max(max_1,x.second);
    }
    for(auto x : mp2){
        max_2 = max(max_2,x.second);
    }
    

        
        return max_1+max_2;        
    }
};
