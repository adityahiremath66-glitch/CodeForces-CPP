class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(),i=0,j=0;
        int m = nums2.size();
        set<int> s1;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
            while(i < n && j < m){
                if(nums1[i] == nums2[j]){
                    s1.insert(nums1[i]);
                    i++;
                    j++;
                }
                else if(nums1[i] < nums2[j]){
                    i++;
                }else{
                    j++;
                }
            }
        vector<int> result(s1.begin(),s1.end());
        return result;
    }
};
