#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> result; 
        int i = 0;  
        int j = 0; 

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i][0] < nums2[j][0]) {
                result.push_back(nums1[i]);  
                i++;
            } else if (nums1[i][0] > nums2[j][0]) {
                result.push_back(nums2[j]);  
                j++;
            } else {
                result.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++;
                j++;
            }
        }

        result.insert(result.end(), nums1.begin() + i, nums1.end());
        result.insert(result.end(), nums2.begin() + j, nums2.end());

        return result;
    }
};