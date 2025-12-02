class Solution {
public:
    int hammingDistance(int x, int y) {
    int result = x ^ y;
    vector<int> a;
        while(result > 0){
            a.push_back(result % 2);
            result = result/2;
        }
    int count=0;
        for(int i=0; i<a.size(); i++){
            if(a[i] == 1){
                count++;
            }
            cout<<a[i];
        }
        
        return count;
    }
};
