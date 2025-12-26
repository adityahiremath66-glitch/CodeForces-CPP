class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
    int n = nums.size();    
    vector<int> odd;
    vector<int> even;
        for(int i=0; i<n; i++){
            if(i % 2 == 0){
                even.push_back(nums[i]);
            }
        }
        for(int i=0; i<n; i++){
            if(i % 2 == 1){
                odd.push_back(nums[i]);
            }
        }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end(), greater<int>());
    vector<int> ans;
        for(int i=0; i<n; i++){
            if(i < even.size()){
                ans.push_back(even[i]);
            }
            if(i < odd.size()){
                ans.push_back(odd[i]);
            }
        }
        

        return ans;
    }
};
