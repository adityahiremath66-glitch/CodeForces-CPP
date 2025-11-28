class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime){
    int n = startTime.size();
    int m = endTime.size();
    int x = 0;
        for(int i=0; i<n; i++){
            if(startTime[i] <= queryTime && queryTime <= endTime[i]){
                x++;
            }
        }
        return x;
    }
};
