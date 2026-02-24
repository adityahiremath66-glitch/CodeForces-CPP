class Solution {
public:
    int totalWaviness(int num1, int num2) {
    int wavy = 0;
        for(int i=num1; i<=num2; i++){
            vector<int> a;
            int x = i;
            while(x){
                int rem = x % 10;
                a.push_back(rem);
                x /= 10;
            }
            for(int j=1; j<a.size()-1; j++){
                if(a[j] < a[j-1] && a[j] < a[j+1]){
                    wavy++;
                }
                else if(a[j] > a[j-1] && a[j] > a[j+1]){
                    wavy++;
                }
            }
        }
        return wavy;
    }
};
