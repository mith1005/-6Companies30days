#include <vector>

class Solution {
public:
    int minOperations(std::vector<int>& nums) {
        int cnt = 0;

    
        for (int i = 0; i <= nums.size() - 3; ++i) {
            if (nums[i] == 0) {
                nums[i] = 1 - nums[i];
                nums[i + 1] = 1 - nums[i + 1];
                nums[i + 2] = 1 - nums[i + 2];
                cnt++;
            }
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                return -1;
            }
        }

        return cnt;
    }
};
