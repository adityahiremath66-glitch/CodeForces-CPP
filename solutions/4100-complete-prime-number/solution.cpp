class Solution {
public:
    bool isPrime(int n){
        if(n <= 1){
            return 0;
        }
        for(int i=2; i*i<=n; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }
    bool completePrime(int num) {
    string s = to_string(num);
    int n = s.length();
    string pref,suff;
    if(isPrime(num) && num < 10){
        return true;
    }
    if(!(isPrime(num)) && num < 10){
        return false;
    }
        for(int i=0; i<n; i++){
            pref += s[i];
            suff += s[n-i-1];
            string t = suff;
            reverse(t.begin(),t.end());
            int x = stoi(pref);
            int y = stoi(t);
            if(!(isPrime(x) && isPrime(y))){
                return false;
            }
        }
    return true;
    }
};
