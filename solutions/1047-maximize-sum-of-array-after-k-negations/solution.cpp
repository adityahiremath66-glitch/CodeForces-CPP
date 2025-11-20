class Solution {
public:
    int largestSumAfterKNegations(vector<int>& a, int k) {
        int i,n=a.size(),sum=0;
        priority_queue<int,vector<int>,greater<int>> p(a.begin(),a.end());
        while(k){
            int t = p.top();
            p.pop(); k--;
            p.push(-t);
        }
        while(!p.empty()){
            sum+=p.top();
            p.pop();
        }
        return sum;

    }
};
