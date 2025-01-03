#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> result(m, vector<int>(n, 0));

        vector<int> directions = {-1, 0, 1};

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int sum = 0;
                int count = 0;

                for (int di : directions) {
                    for (int dj : directions) {
                        int ni = i + di;
                        int nj = j + dj;

                        if (ni >= 0 && ni < m && nj >= 0 && nj < n) {
                            sum += img[ni][nj];
                            ++count;
                        }
                    }
                }

                result[i][j] = floor(sum / count);
            }
        }

        return result;
    }
};
