class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            bool unique=true;
        for(int j = 0 ; j<n ; j++){
            if(nums[i]==nums[j] && i != j ){
               unique=false;
            }
        }
        if(unique==true){
            return nums[i];
        }
       }
       return -1; 
    }
};