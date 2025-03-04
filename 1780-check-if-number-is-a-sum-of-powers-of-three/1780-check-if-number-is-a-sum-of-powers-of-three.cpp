class Solution {
public:
    bool solve(int n, vector<int>& arr, int j, int sum) {
        if (sum == n) {
            return true; 
        }
        if (j >= arr.size() || sum > n) {
            return false;  
        }

        if (solve(n, arr, j + 1, sum + arr[j])) {
            return true;
        }
        if (solve(n, arr, j + 1, sum)) {
            return true;
        }

        return false;  
    }

    bool checkPowersOfThree(int n) {
        vector<int> arr;
        int pow3 = 0;
        while (true) {
            int value = pow(3, pow3);
            if (value > n) break;  
            arr.push_back(value);
            pow3++;
        }

        return solve(n, arr, 0, 0);
    }
};