class Solution {
public:
    int romanToInt(string s) {
    int n = s.size();
    int ans = 0;
    unordered_map<char, int> mpp = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
    };
    int i = n-1;
    while(i>=0){
    if(i>0 && mpp[s[i-1]]<mpp[s[i]]){
        ans += mpp[s[i]] - mpp[s[i-1]];
        i = i-2;   
    }
    else{
        ans += mpp[s[i]];
        i--;
    }
    }
    return ans;   
    }
};