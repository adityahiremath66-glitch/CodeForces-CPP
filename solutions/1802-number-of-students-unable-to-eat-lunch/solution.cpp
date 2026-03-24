class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sd) {
    int n = st.size();
    queue<int> q(st.begin(),st.end());
    int i = 0,rot = 0;
        while(q.size() && rot < q.size()){
            if(q.front() == sd[i]){
                q.pop();
                i++;
                rot = 0;
            }else{
                q.push(q.front());
                q.pop();
                rot++;
            }
        }
    return q.size();
    }
};
