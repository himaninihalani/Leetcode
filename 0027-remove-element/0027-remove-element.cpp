class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int left = 0;                // index to place next non-val
        vector<int> answer;          // collect kept elements
        answer.reserve(n);

        // collect the other elements
        for (int i = 0; i < n; i++) {
            if (nums[i] != val) {
                answer.push_back(nums[i]);
                left++;
            }
        }

        // copy back only the kept elements; do NOT touch nums[left..n-1]
        for (int i = 0; i < left; i++) {
            nums[i] = answer[i];
        }

        return left; // new length (number of elements != val)
    }
};
