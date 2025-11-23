class Solution {
public:
    int maximumValue(vector<string>& strs) {
    int max_val = 0;
        for(int i=0; i<strs.size(); i++) {
            string s = strs[i];
            bool isNumeric = true;
            for(int j=0; j<s.length(); j++) {
                if(!isdigit(s[j])) {
                    isNumeric = false;
                    break;
                }
            }
        int currentVal = 0;
            if(isNumeric) {
                currentVal = stoi(s);
            }else{
                currentVal = s.length();
            }
            if(currentVal > max_val){
                max_val = currentVal;
            }
        }

        return max_val;
    }
};



