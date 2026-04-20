class Solution {
public:
    string breakPalindrome(string pal) {
    int n = pal.length();
    bool check = false;
        for(int i=0; i<n/2; i++){
            if(pal[i] != 'a'){
                check = true;
                pal[i] = 'a';
                break;
            }
        }
        if(n == 1) return "";
        if(!check) pal[n-1] = 'b'; return pal;

        return pal;
    }
};
