class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
    vector<int> fini_ord; 
        for(int i=0; i<order.size(); ++i){
            for(int j=0; j<friends.size(); j++){
                if(order[i] == friends[j]){
                    fini_ord.push_back(order[i]);
                }
            }
        }
    

        return fini_ord;
    }
};
