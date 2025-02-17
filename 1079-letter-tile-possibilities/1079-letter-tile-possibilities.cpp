class Solution {
    void backtrack(unordered_map<char, int>& freq, int& count) {
        for (auto& [ch, val] : freq) {
            if (val > 0) {
                count++;
                freq[ch]--;
                backtrack(freq, count);
                freq[ch]++;
            }
        }
    }

public:
    int numTilePossibilities(string tiles) {
        unordered_map<char, int> freq;
        
        for (char tileChar : tiles) {
            freq[tileChar]++;
        }

        int count = 0;
        backtrack(freq, count);
        return count;
    }
};