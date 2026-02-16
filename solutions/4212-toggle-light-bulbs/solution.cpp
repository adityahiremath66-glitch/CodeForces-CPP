class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
    vector<int> freq(105,0);
    int n = bulbs.size();
    vector<int> ans;
        for(int i=0; i<n; i++){
            freq[bulbs[i]]++;
        }
        for(int i=0; i<freq.size(); i++){
            if(freq[i] % 2 != 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
