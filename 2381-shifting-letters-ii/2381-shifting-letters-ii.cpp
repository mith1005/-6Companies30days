class Solution {
public:
    string shiftingLetters(string str, vector<vector<int>>& shifts) {
        int length = str.size();
        vector<int> delta(length + 1); // Use 'delta' to represent the change in shift for each character

        // Process the shifts
        for (auto& shift : shifts) {
            if (shift[2] == 0) {
                shift[2] = -1;
            }
            delta[shift[0]] += shift[2]; // Apply the shift to the start index
            delta[shift[1] + 1] -= shift[2]; // Reverse the shift after the end index
        }

        for (int i = 1; i <= length; ++i) {
            delta[i] += delta[i - 1];
        }

        string result;
        for (int i = 0; i < length; ++i) {
          int newCharIndex = (str[i] - 'a' + delta[i] % 26 + 26) % 26;
            result += ('a' + newCharIndex);
        }
        return result;
    }
};