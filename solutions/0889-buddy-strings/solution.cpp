class Solution {
public:
    bool buddyStrings(string s, string goal) {
    int n = s.length();
        if(s.size() != goal.size()){
            return 0;
        }
        if(s == goal){
            set<char> temp(s.begin(),s.end());
            if(temp.size() < goal.size()){
                return 1;
            }else{
                return 0;
            }
        }
    int i=0,j=n-1;
        while(i < j && s[i] == goal[i]){
            i++;
        }
        while(j > i && s[j] == goal[j]){
            j--;
        }
        swap(s[i],s[j]);
    
        return s == goal;
    }
};
