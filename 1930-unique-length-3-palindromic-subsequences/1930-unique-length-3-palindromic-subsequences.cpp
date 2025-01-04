class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans = 0;

        for (char c = 'a'; c <= 'z'; ++c) {
            int firstIndex = s.find_first_of(c);
            int lastIndex = s.find_last_of(c);

            unordered_set<char> uniqueChars;

            for (int i = firstIndex + 1; i < lastIndex; ++i) {
                uniqueChars.insert(s[i]);
            }
            ans += uniqueChars.size();
        }
        return ans;
    }
};