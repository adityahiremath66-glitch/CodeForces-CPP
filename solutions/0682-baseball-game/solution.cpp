class Solution {
public:
    int calPoints(vector<string>& operations) {
    int n = operations.size();
    vector<int> a;
    int sum = 0;
        
        for(int i=0; i<n; i++){
            if(operations[i] != "+" && operations[i] != "D" && operations[i] != "C"){
                a.push_back(stoi(operations[i]));
            }
            if(operations[i] == "+"){
                a.push_back(a[a.size()-1]+a[a.size()-2]);
            }
            if(operations[i] == "D"){
                a.push_back((a[a.size()-1])*2);
            }
            if(operations[i] == "C"){
                a.pop_back();
            }
        }
        for(int i=0; i<a.size(); i++){
            sum = sum + a[i];
        }
        return sum;
    }
};
