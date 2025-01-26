
class Solution {
public:
    bool isPalindrome(const string& s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }

    void backtrack(int start, const string& s, vector<string>& current, vector<vector<string>>& result) {
        if (start == s.size()) {
            result.push_back(current);  
            return;
        }

        for (int end = start; end < s.size(); end++) {
            if (isPalindrome(s, start, end)) {  
                current.push_back(s.substr(start, end - start + 1));  
                backtrack(end + 1, s, current, result);  
                current.pop_back(); 
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> current;
        backtrack(0, s, current, result);
        return result;
    }
};
