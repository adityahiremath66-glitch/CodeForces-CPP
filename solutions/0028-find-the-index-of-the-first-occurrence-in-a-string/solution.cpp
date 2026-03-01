class Solution {
public:
    int strStr(string haystack, string needle) {
    int n = haystack.length();
    int m = needle.length();
        for(int i=0; i<=n-m; i++){
            string t = haystack.substr(i,m);
            if(t == needle){
                return i;
            }
        }
        return -1;
    }
};
