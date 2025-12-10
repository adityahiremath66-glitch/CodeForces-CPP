class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
    int a,b;
    int ans = 0;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(board[i][j] == 'R'){
                    a = i;
                    b = j;
                }
            }
        }
        for(int i=b+1; i<8; i++){
            if(board[a][i] == 'B'){
                break;
            }else if(board[a][i] == '.'){
                continue;
            }else{
                ans++;
                break;
            }
        }
        for(int i=a+1; i<8; i++){
            if(board[i][b] == 'B'){
                break;
            }else if(board[i][b] == '.'){
                continue;
            }else{
                ans++;
                break;
            }
        }
        for(int i=b-1; i>=0; i--){
            if(board[a][i] == 'B'){
                break;
            }else if(board[a][i] == '.'){
                continue;
            }else{
                ans++;
                break;
            }
        }
        for(int i=a-1; i>=0; i--){
            if(board[i][b] == 'B'){
                break;
            }else if(board[i][b] == '.'){
                continue;
            }else{
                ans++;
                break;
            }
        }
        
        return ans;
    }
};
