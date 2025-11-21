class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Start from the last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;      // just +1 and done
                return digits;
            }
            digits[i] = 0;        // 9 + 1 => 0, carry to previous
        }

        // If all digits were 9: e.g. 999 -> 1000
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
