class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        for(int i = 1; i < s.size(); i++)
        {
            int x = s[i - 1] - 'a';
            int y = s[i] - 'a';
            ans += abs(x -y);
        }
        return ans;
    }
};