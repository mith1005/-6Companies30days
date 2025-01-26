class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> factorial(n + 1, 1);
        for (int i = 2; i <= n; ++i) {
            factorial[i] = factorial[i - 1] * i;
        }
        vector<int> nums;
        for (int i = 1; i <= n; ++i) {
            nums.push_back(i);
        }
        k--;
        string result = "";
        for (int i = 1; i <= n; ++i) {
            int blockSize = factorial[n - i];

            int index = k / blockSize;
            result += to_string(nums[index]);
            nums.erase(nums.begin() + index);
            k %= blockSize;
        }

        return result;
    }
};