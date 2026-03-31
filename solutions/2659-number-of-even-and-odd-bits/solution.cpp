class Solution {
public:
    vector<int> evenOddBit(int n) {
    vector<int> bin;
    int x = n;
    int odd = 0,even = 0;
        while(x){
            int rem = x % 2;
            bin.push_back(rem);
            x /= 2;
        }
        for(int i=0; i<bin.size(); i++){
            if(bin[i] == 1 && i % 2 == 0){
                even++;
            }
            if(bin[i] == 1 && i % 2 == 1){
                odd++;
            }   
        }
        return {even,odd};
    }
};
