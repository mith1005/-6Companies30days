class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1000000007;
        int odd = 0, even = 1; // even is initialized to 1 because prefix sum of 0 is even
        int result = 0;
        int prefixSum = 0;

        for (int i = 0; i < arr.size(); i++) {
            prefixSum ^= arr[i]; 
            if (prefixSum & 1) {
                result = (result + even) % MOD;
                odd++; 
            } else {
                result = (result + odd) % MOD;
                even++; 
            }
        }

        return result;
    }
};