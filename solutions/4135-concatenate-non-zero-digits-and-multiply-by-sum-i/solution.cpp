class Solution {
public:
    long long sumAndMultiply(int n) {
    long long sum = 0,ans = 0;
    int x = n;
    string s;
        if(n == 0){
            return 0;
        }
        while(x){
            int rem = x % 10;
            if(rem){
                s.push_back(rem+'0');
            }
            x /= 10;
        }
        reverse(s.begin(),s.end());
    long long num = stoll(s);
    long long a = num;
        while(num){
            long long x = num % 10;
            sum += x;
            num /= 10;
        }
    ans = a*sum;
        return ans;
    }
};
