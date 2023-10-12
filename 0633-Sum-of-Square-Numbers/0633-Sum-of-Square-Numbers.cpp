class Solution {
public:
    bool judgeSquareSum(int c) {
        int sq = sqrt(c);
        int x, sqx;
        for(int i=0; i<=sq; i++){
            x = c - i * i;
            sqx = sqrt(x);
            if(sqx * sqx == x){
                return true;
            }
        }
        return false;
    }
};
