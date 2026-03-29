class Solution {
public:
    long long gcd(long long a,long long b) {
        if(b == 0){
            return a;
        }
        return gcd(b, a % b);
    }
    long long gcdSum(vector<int>& nums) {   
    int n = nums.size();
    vector<int> pre_gcd(n);
    vector<int> pre_mx(n);
    pre_mx[0] = nums[0];
    pre_gcd[0] = nums[0];
    cout<<pre_gcd[0]<<"\n";
        for(int i=1; i<n; i++){
            pre_mx[i] = max(pre_mx[i-1],nums[i]);
            pre_gcd[i] = gcd(pre_mx[i],nums[i]);
            cout<<pre_gcd[i]<<"\n";
        }

    sort(pre_gcd.begin(),pre_gcd.end());
    long long ans = 0;
        for(int i=0; i<n/2; i++){
            ans += gcd(pre_gcd[i],pre_gcd[n-i-1]);
        }
        return ans;
    }
};
