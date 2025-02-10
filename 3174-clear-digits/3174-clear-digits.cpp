class Solution {
public:
    string clearDigits(string s) {
        
        int Length = 0;

        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                
                Length = max(Length - 1, 0);
            } else {
                s[Length++] = s[i];
            }
        }

        s.resize(Length);

        return s;
    }
};