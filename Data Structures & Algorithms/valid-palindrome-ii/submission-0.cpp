class Solution {
public:
    bool isPalindrome(int l, int r, bool can_miss, string &s)
    {
        if(l > r)
        {
            return true;
        }
        if(s[l] == s[r])
        {
            return isPalindrome(l + 1, r - 1, can_miss, s);
        }
        else if(can_miss)
        {
            return isPalindrome(l + 1, r, false, s) | isPalindrome(l, r - 1, false, s);
        }
        return false;
    }
    bool validPalindrome(string s) {
        int n = s.length();
        return isPalindrome(0, n - 1, true, s);
    }
};