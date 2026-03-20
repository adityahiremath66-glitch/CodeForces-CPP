class Solution {
public:
    int maxNumberOfBalloons(string text) {
    int n = text.length();
    map<char,int> mp;
        for(int i=0; i<n; i++){
            if(text[i] == 'b'||text[i]=='a'||text[i]=='l'||text[i]=='o'||text[i]=='n'){
                mp[text[i]]++;
            }
        }
    vector<int> a;
        if(mp.size() < 5){
            return 0;
        }
    int sum = 0;
        for(auto x : mp){
            a.push_back(x.second);
            sum += x.second;
        }
        a[2] /= 2;
        a[4] /= 2;
    int ans = INT_MAX;
        for(int i=0; i<a.size(); i++){
            cout<<a[i]<<"\n";
            ans = min(ans,a[i]);
        }
        return ans;
    }
};
