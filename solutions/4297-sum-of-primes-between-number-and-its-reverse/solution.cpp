class Solution {
public:
    int sumOfPrimesInRange(int n) {
    int x = n;
    string s;
        while(x){
            int rem = x % 10;
            s += rem+'0';
            x /= 10;
        }
    int r = stoi(s);
    int ans = 0;
        for(int i=min(n,r); i<=max(n,r); i++){
            bool isprime = true;
            for(int j=2; j*j<=i; j++){
                if(i%j == 0){
                    isprime = false;
                    break;
                }
            }
            if(isprime && i!=1){
                ans += i;   
            }
        }
    return ans;
    }
};
