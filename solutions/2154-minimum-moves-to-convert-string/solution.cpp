class Solution {
public:
    int minimumMoves(string s) {
    int n = s.length();
    int moves = 0;
    int i = 0;
        while(i < n){
            if(s[i] == 'X'){
                moves++;
                i += 3;
            }else{
                i++;
            }
        }
    
        return moves;
    }
};
