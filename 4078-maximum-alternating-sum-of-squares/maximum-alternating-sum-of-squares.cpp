class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> v;
    long long ans = 0;
        for(int i=0; i<n; i++){
            if(nums[i] < 0){
                nums[i] *= -1;
            }
        }
    sort(nums.begin(),nums.end());
        for(int i=0; n%2==0 ? i<n/2 : i<=n/2; i++){
            if(n%2==1 && i == n/2){
                v.push_back(nums[i]);
                break;
            }
            v.push_back(nums[n-i-1]);
            v.push_back(nums[i]);
        }
        for(auto x : v){
            cout<<x<<"\n";
        }
        for(int i=0; i<n; i++){
            if(i%2==0) ans += v[i]*v[i];
            else ans -= v[i]*v[i];
        }
    return ans;
    }
};