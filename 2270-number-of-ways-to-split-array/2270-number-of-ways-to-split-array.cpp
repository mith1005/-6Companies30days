class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long> pSum(n);
        pSum[0] = nums[0];

        for (int i = 1; i < n; i++) {
            pSum[i] = pSum[i - 1] + nums[i];
        }

        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            long long leftSum = pSum[i];
            long long rightSum = pSum[n - 1] - pSum[i];

            if (leftSum >= rightSum) {
                count++;
            }
        }

        return count;
    }
};