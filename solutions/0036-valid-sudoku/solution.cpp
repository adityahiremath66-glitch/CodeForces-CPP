class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    bool row_check = true;
    bool column_check = true;
    map<pair<int,int>,set<int>> mp;
        for(int i=0; i<9; i++){
            vector<int> f1(10,0);
            for(int j=0; j<9; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                f1[(board[i][j])-'0']++;
            }
            for(int k=1; k<=9; k++){
                if(f1[k] > 1){
                    row_check = false;
                    break;
                }
            }
        }
        for(int i=0; i<9; i++){
            vector<int> f1(10,0);
            for(int j=0; j<9; j++){
                if(board[j][i] == '.'){
                    continue;
                }
                f1[(board[j][i])-'0']++;
            }
            for(int k=1; k<=9; k++){
                if(f1[k] > 1){
                    column_check = false;
                    break;
                }
            }
        }
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(board[i][j]=='.'){
                continue;
            }
            pair<int,int> p = {i/3,j/3};
            set<int> &s = mp[p];
            if(s.find(board[i][j]-'0')==s.end()){
            s.insert(board[i][j]-'0'); 
            cout<<i<<" "<<j<<"\t"<<board[i][j]-'0'<<"\n";

            } 
            else 
            {cout<<i<<"\t"<<j;return 0;}
        }
    }  
        if((row_check == false) || (column_check == false)){
            return false;
        }
    return true;
    }
};
