class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int n = word.size(), m = abbr.size();
        int i = 0, j = 0;

        while (i < n && j < m) {
            if (isalpha(abbr[j])) {
                if (word[i] != abbr[j]) return false;
                i++;
                j++;
            } else {
                if (abbr[j] == '0') return false;

                int num = 0;
                while (j < m && isdigit(abbr[j])) {
                    num = num * 10 + (abbr[j] - '0');
                    j++;
                }
                i += num;
            }
        }

        return i == n && j == m;
    }
};