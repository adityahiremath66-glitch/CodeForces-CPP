class Solution {
public:
    int minChanges(int n, int k) {
    vector<long long> bin_n;
    vector<long long> bin_k;
    while(n > 0){
        bin_n.push_back(n % 2);
        n = n / 2;
    }
    while(k > 0){
        bin_k.push_back(k % 2);
        k = k / 2;
    }
long long a = bin_n.size();
long long b = bin_k.size();
int changes = 0;
int max_num = max(a,b);
    for(long long i=0; i<max_num; ++i) {
        int bn,bk;
        if(i < bin_n.size()){
            bn = bin_n[i];  
        }else{
            bn = 0;
        }
        if(i < bin_k.size()){
            bk = bin_k[i];
        }else{
            bk = 0;
        }
        if(bn == 0 && bk == 1){
            return -1;
        } 
        if(bn != bk) {
            ++changes;
        }
    }
    return changes;
    }
};
