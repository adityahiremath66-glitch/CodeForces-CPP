class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    int n = letters.size();
    int st = 0,end = n-1;
        while(st<=end){
            int mid = (st+end)/2;
            if(letters[mid] <= target){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }

        return letters[st%n];
    }
};
