class Solution {
public:
    int countMonobit(int n) {
    int monobit = 0;    
        for(int i=1; i<=n; i++){
            bool check = true;
            vector<int> bin;
            int x = i;
            while(x != 0){
                bin.push_back(x%2);
                x /= 2;
            }
            for(int i=1; i<bin.size(); i++){
                if(bin[i] != bin[0]){
                    check = false;
                    break;
                }else{
                    continue;
                }
            }
        if(check){
            monobit++;
        }
        }
        return monobit+1;
    }
};
