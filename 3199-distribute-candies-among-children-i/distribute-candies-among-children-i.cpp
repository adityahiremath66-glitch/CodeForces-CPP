class Solution {
public:
    int distributeCandies(int n, int lim) {
    int ans = 0;
        for(int i=0; i<=lim; i++){
            for(int j=0; j<=lim; j++){
                for(int k=0; k<=lim; k++){
                    if(i+j+k == n){
                        ans++;
                    }
                }   
            }
        }
        return ans;
    }
};