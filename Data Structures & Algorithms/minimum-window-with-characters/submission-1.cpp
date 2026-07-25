class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length(), m = t.length();

        unordered_map<char, int> mpp, curr;
        for (int i = 0; i < m; i++) 
        {
            mpp[t[i]]++;
        }

        int count = 0;
        int i = 0, j = 0;
        int start = -1;
        int len = INT_MAX;

        while (i < n) 
        {
            curr[s[i]]++;

            if (mpp.find(s[i]) != mpp.end() && curr[s[i]] == mpp[s[i]]) 
            {
                count++;
            }

            while (count == mpp.size()) 
            {
                if (i - j + 1 < len)
                {
                    len = i - j + 1;
                    start = j;
                }

                curr[s[j]]--;

                if (mpp.find(s[j]) != mpp.end() && curr[s[j]] < mpp[s[j]]) 
                {
                    count--;
                }

                j++;
            }

            i++;
        }

        if (start == -1) return "";

        string ans = "";
        for (int k = start; k < start + len; k++) 
        {
            ans += s[k];
        }

        return ans;
    }
};