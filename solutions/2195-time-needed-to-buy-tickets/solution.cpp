class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
    int n = t.size();
    queue<int> q;
    int i = 0 ;
        while(i < t.size()){
            q.push(i++);
        }
    int time = 0;
        while(!q.empty()){
            int p = q.front();
            q.pop();

            t[p]--;
            time++;

            if(p == k && t[k] == 0){
                return time;
            }
            if(t[p] > 0){
                q.push(p);
            }
        }
    return time;
    }
};
