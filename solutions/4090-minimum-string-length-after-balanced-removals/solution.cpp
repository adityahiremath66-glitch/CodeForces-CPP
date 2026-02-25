class Solution {
public:
    int minLengthAfterRemovals(string s) {
    int n = s.length();
    int count_a = 0,count_b = 0;
        for(int i=0; i<n; i++){
            if(s[i] == 'a'){
                count_a++;
            }else{
                count_b++;
            }
        }
        if(count_a == 0){
            return count_b;
        }
        if(count_b == 0){
            return count_a;
        }
        if(count_a == count_b){
            return 0;
        }
        return n - 2*(min(count_a,count_b));
    }
};
