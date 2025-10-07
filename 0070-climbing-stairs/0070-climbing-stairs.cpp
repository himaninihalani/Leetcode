class Solution {
public:
    int climbStairs(int n) {
        if(n<2){
            return n;
        }
        int onestep = 1;
        int twostep = 2;
        int next;
        for(int i=3 ; i<=n ; i++){
            next = onestep + twostep;
            onestep = twostep;
            twostep = next;   
        }
        return twostep;
    }
};