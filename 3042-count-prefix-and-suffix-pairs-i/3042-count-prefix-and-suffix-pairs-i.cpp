class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0; 

        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                const string& str1 = words[i];
                const string& str2 = words[j];

                if (str1.size() > str2.size()) continue;

                bool isPrefix = str2.substr(0, str1.size()) == str1;
                bool isSuffix = str2.substr(str2.size() - str1.size()) == str1;

                if (isPrefix && isSuffix) {
                    count++;
                }
            }
        }

        return count; 
    }
};
