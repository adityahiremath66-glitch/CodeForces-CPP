class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
    int n = arr.size();
    int tot_sum = 0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                vector<int> temp;
                int sum = 0;
                for(int k=i; k<=j; k++){
                    temp.push_back(arr[k]);
                    sum += arr[k];
                }
                if(temp.size() % 2 != 0){
                    tot_sum += sum;
                }
            }
        }
        return tot_sum;
    }
};
