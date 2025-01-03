
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

        int numWords = words.size();
      
        vector<int> prefixSum(numWords + 1, 0);

        for (int i = 0; i < numWords; ++i) {
            char firstChar = words[i][0], lastChar = words[i].back();
            prefixSum[i + 1] = prefixSum[i] + (vowels.count(firstChar) && vowels.count(lastChar));
        }

        vector<int> ans;

        for (auto& query : queries) {
            int leftBoundary = query[0], rightBoundary = query[1];
            ans.push_back(prefixSum[rightBoundary + 1] - prefixSum[leftBoundary]);
        }

        return ans;
    }
};
