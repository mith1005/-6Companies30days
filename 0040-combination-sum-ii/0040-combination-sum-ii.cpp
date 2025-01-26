


class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<int>& combination, vector<vector<int>>& result, int start) {
        if (target == 0) {
            result.push_back(combination);
            return;
        }
        if (target < 0) return;

        for (int i = start; i < candidates.size(); i++) {
            // Skip duplicates to avoid duplicate combinations in the result
            if (i > start && candidates[i] == candidates[i - 1]) continue;

            combination.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], combination, result, i + 1);  // i + 1 ensures each number is used only once
            combination.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());  // Sort to handle duplicates easily
        vector<vector<int>> result;
        vector<int> combination;
        backtrack(candidates, target, combination, result, 0);
        return result;
    }
};