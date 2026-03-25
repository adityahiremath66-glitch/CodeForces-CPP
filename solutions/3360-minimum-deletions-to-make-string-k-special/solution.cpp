class Solution {
public:
    int minimumDeletions(string word, int k) {
    int n = word.size();
    vector<int> v;
    map<char,int> mp;
    int opr = 0;
        for(int i=0; i<n; i++){
            mp[word[i]]++;
        }
        for(auto x : mp){
            v.push_back(x.second);
        }
    int m = v.size();
    sort(v.begin(), v.end()); 
    int ans = INT_MAX;
        for(int i = 0; i < m; i++){
            int base = v[i];
            int opr = 0;

            for(int j = 0; j < m; j++){
                if(v[j] < base){
                    opr += v[j];
                }
                else if(v[j] > base + k){
                    opr += (v[j] - (base + k));
                }
            }

            ans = min(ans, opr);
        }
        return ans;
    }
};
