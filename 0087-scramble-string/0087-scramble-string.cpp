class Solution {
private:
    unordered_map<string, bool> memo;
    
    bool isScrambleHelper(string s1, string s2) {
        if (s1.length() != s2.length()) return false;
        int n = s1.length();
        if (n == 0) return true;
        if (s1 == s2) return true;
        if (n == 1) return s1[0] == s2[0];
        
        string key = s1 + "#" + s2;
        if (memo.count(key)) return memo[key];
        
        for (int i = 1; i < n; i++) {
            if (isScrambleHelper(s1.substr(0, i), s2.substr(0, i)) && 
                isScrambleHelper(s1.substr(i), s2.substr(i))) {
                memo[key] = true;
                return true;
            }
            if (isScrambleHelper(s1.substr(0, i), s2.substr(n - i)) && 
                isScrambleHelper(s1.substr(i), s2.substr(0, n - i))) {
                memo[key] = true;
                return true;
            }
        }
        
        memo[key] = false;
        return false;
    }
    
public:
    bool isScramble(string s1, string s2) {
        memo.clear();
        return isScrambleHelper(s1, s2);
    }
};