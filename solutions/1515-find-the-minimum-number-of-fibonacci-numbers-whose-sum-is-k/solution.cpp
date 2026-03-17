class Solution {
public:
    int findMinFibonacciNumbers(int k) {
    vector<int> fib;
    int i = 2;
    fib.push_back(0);
    fib.push_back(1);
    int pre_2 = 1,pre_1 = 1;
        while(fib.back() <= k){
            fib.push_back(fib[i-1]+fib[i-2]);
            i++;
        }
        if(!fib.empty()){
            fib.pop_back();
        }
    int n = fib.size();
    int sum = fib.back();
    int cnt = 1;
    int j = n-2;
        for(int i=0; i<n; i++){
            cout<<fib[i]<<"\n";
        }
        while(sum < k){
            int curr = k-sum;
            for(int i=j; i>=0; i--){
                if(fib[i] <= curr){
                    sum += fib[i];
                    ++cnt;
                    j = i;
                    break;
                }
            }
        }
    return cnt;
    }
};
