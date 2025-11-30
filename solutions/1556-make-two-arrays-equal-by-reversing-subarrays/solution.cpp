class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
    vector<int> freq1(1005,0);
    vector<int> freq2(1005,0);
        for(int i=0; i<target.size(); i++){
            freq1[target[i]]++;
        }    
        for(int i=0; i<arr.size(); i++){
            freq2[arr[i]]++;
        }
        for(int i=0; i<freq1.size(); i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }
};
