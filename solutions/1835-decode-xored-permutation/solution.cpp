class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
    int n = encoded.size();
    int tot_xor = 0;
    int odd_xor = 0;
    vector<int> ans;
        for(int i=1; i<=n+1; i++){
            tot_xor = tot_xor ^ i;
        }
        cout<<tot_xor<<"\n";
        for(int i=0; i<n; i++){
            if(i % 2 == 1){
                odd_xor = odd_xor^encoded[i];
            }
        }
        cout<<odd_xor<<"\n";
    int first_ele = tot_xor ^ odd_xor;
    cout<<first_ele<<"\n";
    ans.push_back(first_ele);
        for(int i=0; i<n; i++){
            int subs_xor = ans.back()^encoded[i];
            ans.push_back(subs_xor);
        }
        return ans;
    }

};
