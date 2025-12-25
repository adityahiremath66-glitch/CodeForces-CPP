class Solution {
public:
    vector<int> evenOddBit(int n) {
    int a = n;
    vector<int> bin;
    int even = 0;
    int odd = 0;
        while(a > 0){
            bin.push_back(a % 2);
            a /= 2;
        }
        for(int i=0; i<bin.size(); i++){
            if(bin[i] == 1 && i % 2 == 0){
                even++;
            }else if(bin[i] == 1 && i % 2 == 1){
                odd++;
            }
        }
    vector<int> ans = {even,odd};
        return ans;
    }
};
