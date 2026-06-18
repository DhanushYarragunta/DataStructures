class Solution {
public:
    bool isDigit(char c)
    {
        return (c >= '0' && c <= '9');
    }
    bool isAlphabet(char c)
    {
        c = tolower(c);
        return (c >= 'a' && c <= 'z');
    }
    bool isPalindrome(string s) {
        int l = 0, r = s.length() - 1;
        while(l <= r)
        {
            if(!isDigit(s[l]) && !isAlphabet(s[l]))
            {
                l += 1;
                continue;
            }
            if(!isDigit(s[r]) && !isAlphabet(s[r]))
            {
                r -= 1;
                continue;
            }
            if(tolower(s[r]) != tolower(s[l]))
            {
                cout << s[r] << " " << s[l] << endl;
                return false;
            }
            l += 1;
            r -= 1;
        }
        return true;
    }
};
