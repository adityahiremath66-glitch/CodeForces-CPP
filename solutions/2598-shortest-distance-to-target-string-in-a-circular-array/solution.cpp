class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
    int n = words.size();
        for(int i=0; i<n; i++){
        int right_Ind = (startIndex + i) % n;
        int left_Ind = (startIndex - i + n) % n;
        if(words[right_Ind] == target || words[left_Ind] == target){
                return i;
        }
        }
        return -1;
    }
        
};
