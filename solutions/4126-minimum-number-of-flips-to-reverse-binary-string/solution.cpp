class Solution {
public:
    int minimumFlips(int n) {
    int x = n;
    vector<int> a;
    int flip_bits = 0; 
    while(x){
        int rem = x % 2;
        a.push_back(rem);
        x /= 2;
    }
    vector<int> b(a.begin(),a.end());
    reverse(a.begin(),a.end());
        for(int i=0; i<a.size(); i++){
            if(a[i] != b[i]){
                flip_bits++;
            }
        }
        return flip_bits;
    }   
};
