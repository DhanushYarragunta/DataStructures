class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        int i = 0, j = 0;
        string Result = "";
        while(i < n && j < m)
        {
            Result += word1[i];
            Result += word2[j];
            i += 1;
            j += 1;
        }
        while(i < n)
        {
            Result += word1[i];
             i += 1;
        }
        while(j < m)
        {
            Result += word2[j];
            j += 1;
        }
        return Result;
    }
};