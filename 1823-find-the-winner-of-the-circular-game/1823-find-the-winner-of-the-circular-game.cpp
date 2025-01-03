class Solution {
public:
    int findTheWinner(int n, int k) {
        if (n == 1) 
            return 1; 

        int winner = findTheWinner(n - 1, k);

        int adjustedWinner = (winner + k) % n;

        
        return adjustedWinner == 0 ? n : adjustedWinner;
    }
};