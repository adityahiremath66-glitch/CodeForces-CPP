class Solution {
public:
    int secondsBetweenTimes(string st, string end) {
        int hr = stoi(end.substr(0,2))-stoi(st.substr(0,2));
        int min = stoi(end.substr(3,2))-stoi(st.substr(3,2));
        int sec = stoi(end.substr(6,2))-stoi(st.substr(6,2));
        return hr*60*60+min*60+sec;
    }
};