class Solution {
public:
    bool check_prime(long long n){
        int i;
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
    int largestPrime(int n) {
    vector<bool> prime_check(n+1,1);
    vector<int> prime; 
    if(n==0 || n==1){
        return 0;
    }
    prime_check[0] = 0; prime_check[1] = 0;
        for(int i=2; i*i<=n; i++){
            if(prime_check[i]){
                for(int j=i*i; j<=n; j+=i){
                    prime_check[j] = false;
                }
            }
        }
        for(int i=0; i<prime_check.size(); i++){
            if(prime_check[i]){
                prime.push_back(i);
            }
        }
    int x = prime.size(),i;
    vector<long long> pre_sum(x);
    pre_sum[0] = prime[0];
        for(i=1; i<prime.size(); i++){
            if(pre_sum[i] > n) break;
            pre_sum[i] = pre_sum[i-1] + prime[i];
        }
        int y = i;    
        for(int i=y-1; i>=0; i--){
            if(pre_sum[i] <= n && check_prime(pre_sum[i])){
                return pre_sum[i];
            }
        }
    return 0;
    }
};
