class Solution {
public:
    bool squareIsWhite(string coordinates) {
    int col = coordinates[0]-97;
    int row = coordinates[1]-'0';
        if(row % 2 == 1 && col % 2 == 1){
            return 1;
        }
        if(row % 2 == 0 && col % 2 == 0){
            return 1;
        }
        return 0;
    }
};
