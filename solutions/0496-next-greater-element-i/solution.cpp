class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();
    map<int,int> mp;
    vector<int> ans;
        for(int i=0; i<m; i++){
            mp[nums2[i]] = i;
        }
        for(int i=0; i<n; i++){
            bool check = false;
            if(mp[nums1[i]]+1 < m){
                for(int j=mp[nums1[i]]+1; j<m; j++){
                    if(nums2[mp[nums1[i]]] < nums2[j]){
                        ans.push_back(nums2[j]);
                        check = true;
                        break;
                    }
                }
            }
            if(!check){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
