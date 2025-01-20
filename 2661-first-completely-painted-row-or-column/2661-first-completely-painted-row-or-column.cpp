class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int numRows = mat.size(), numCols = mat[0].size();
        vector<int> rCount(numRows), cCount(numCols);
        unordered_map<int, pair<int, int>> numToPos;

        for (int row = 0; row < numRows; row++) {
            for (int col = 0; col < numCols; col++) {
                int value = mat[row][col];
                numToPos[value] = {row, col};
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            int num = arr[i];
            auto [row, col] = numToPos[num];

            rCount[row]++;
            cCount[col]++;

            if (rCount[row] == numCols || cCount[col] == numRows) {
                return i;
            }
        }

        return -1;  
    }
};