class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
    vector<int> arr;
    int n = encoded.size();
    arr.push_back(first);
        for(int i=0; i<n; i++){
            int x = (encoded[i]^arr[i]);
            arr.push_back(x);
        }
        return arr;
    }
};
