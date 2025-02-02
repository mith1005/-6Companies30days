class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return true;
        int iCnt = 0;
        for (int i = 1; i < n; ++i) {
            if (nums[i] < nums[i - 1]) {
                ++iCnt;
            }
        }
        if (nums[0] < nums[n - 1]) {
            ++iCnt;
        }

        return iCnt <= 1;
    }
};