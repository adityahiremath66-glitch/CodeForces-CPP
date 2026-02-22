class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
    vector<int> arr;
    int max_sum = 0;
       while(numOnes--){
          arr.push_back(1); 
       }   
       while(numZeros--){
          arr.push_back(0);
       }
       while(numNegOnes--){
          arr.push_back(-1);
       }
       for(int i=0; i<k; i++){
             max_sum += arr[i];  
       }
       return max_sum;
    }
};
