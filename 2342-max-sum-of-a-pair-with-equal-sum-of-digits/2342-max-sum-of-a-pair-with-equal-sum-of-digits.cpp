class Solution {
public:
int sumOfDigits(int a) {
        int sum = 0;
        while (a > 0) { 
            sum += a % 10;
            a /= 10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int, vector<int>> digitSumMap; 
        
        for (int num : nums) {
            int digitSum = sumOfDigits(num);
            digitSumMap[digitSum].push_back(num);
        }

        int maxSum = -1; 

        for (auto& [sum, values] : digitSumMap) {
            if (values.size() >= 2) { 
                sort(values.begin(), values.end(), greater<int>()); 
                maxSum = max(maxSum, values[0] + values[1]); 
            }
        }

        return maxSum;
    }
};