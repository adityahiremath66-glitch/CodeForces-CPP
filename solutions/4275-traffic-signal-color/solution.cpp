class Solution {
public:
    string trafficSignal(int tim) {
        if(tim == 0){
            return "Green";
        }else if(tim == 30){
            return "Orange";
        }else if(tim > 30 && tim <= 90){
            return "Red";
        }
        return "Invalid";
    }
};
