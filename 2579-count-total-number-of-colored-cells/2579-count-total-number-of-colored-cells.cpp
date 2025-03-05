class Solution {
public:
    long long coloredCells(int n) {

        //2n-1+2()
        long long bonus=2*n-3;
        long long sum=0;

        while(bonus>0){
            sum+=bonus;
            bonus-=2;
        }

        return 2*n-1 +2*sum;
        
    }
};