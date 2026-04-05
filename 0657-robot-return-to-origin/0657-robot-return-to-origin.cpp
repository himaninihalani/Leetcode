class Solution {
public:
    bool judgeCircle(string moves) {
       int n = moves.size();
       int i = 0;
       int j = 0;
       for(int k=0;k<n;k++){
        if(moves[k]=='U'){
            j++;
        }
        else if(moves[k]=='D'){
            j--;
        }
        else if(moves[k]=='R'){
            i++;
        }
        else if(moves[k]=='L'){
            i--;
        }
       }
       if(i==0 && j==0){
        return true;
       }
       return false; 
    }
};