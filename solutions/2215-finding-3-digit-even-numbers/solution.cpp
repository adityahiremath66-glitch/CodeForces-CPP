class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& dig) {
    int n = dig.size();
    vector<int> ans;
    vector<int> freq(10,0);
        for(int i=0; i<n; i++){
            freq[dig[i]]++;
        }
        for(int i=100; i<999; i++){
            int a = i/100;
            int b = (i/10)%10;
            int c = i%10;
            vector<int> t(10,0);
            bool check = true;
            t[a]++; t[b]++; t[c]++;
            for(int j=0; j<10; j++){
                if(t[j] > freq[j]){
                    check = false;
                }
            }
            if(check && a!=0 && c%2==0){
                ans.push_back(i);
            }
        }
    return ans;
    }
};
