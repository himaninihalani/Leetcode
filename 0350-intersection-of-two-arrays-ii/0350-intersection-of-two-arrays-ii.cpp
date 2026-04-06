class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int k=nums2.size();
        vector<int> ans;
        vector<bool> used(k,false);
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                if(nums1[i]==nums2[j]&&used[j]==false){
                    ans.push_back(nums1[i]);
                    used[j]=true;
                    break;
                }
            }
        }
        return ans; 
    }
};