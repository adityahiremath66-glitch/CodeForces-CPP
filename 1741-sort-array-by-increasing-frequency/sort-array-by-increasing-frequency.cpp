class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
    unordered_map<int, int> cnt;
    for(auto x : nums){
        cnt[x]++;
    }
        sort(begin(nums), end(nums), [&](int a, int b){
            return cnt[a] == cnt[b] ? a > b : cnt[a] < cnt[b];
        });
        return nums;
    }
};