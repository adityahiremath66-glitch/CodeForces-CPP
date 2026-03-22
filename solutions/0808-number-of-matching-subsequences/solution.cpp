class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& w) {
        map<char,vector<int> > mp;
        int i,j,ans=0;
        for(i=0;i<s.size();i++){
            mp[s[i]].push_back(i);
        }
        for(auto x:w){
            string q = x;
            int i = -1;
            for(j=0;j<q.size();j++){
                if(mp.find(q[j])!=mp.end()){
                    vector<int> &v = mp[q[j]];
                    auto it = upper_bound(v.begin(),v.end(),i);
                    if(it!=v.end()){
                        i = *it;
                    } else {
                        break;
                    }
                } else {
                    break;
                }
            }
            if(j==q.size()){
                ans++;
            }
        }
        return ans;
    }
};
