class Solution {
public:
    int compress(vector<char>& chars) {
        int j = 1;
        int count = 1, curr = 1;
        for(int i = 1; i < chars.size(); i++)
        {
            if(chars[i] != chars[i - 1])
            {
                count += 1;
                if(curr > 1)
                {
                    string s = to_string(curr);
                    for(int k = 0; k < s.size(); k++)
                    {
                        chars[j++] = s[k];
                    }
                    count += (int)s.size();
                }
                curr = 1;
                chars[j++] = chars[i];
            }
            else
            {
                curr += 1;
            }
        }
        if(curr > 1)
        {
            string s = to_string(curr);
            for(int k = 0; k < s.size(); k++)
            {
                chars[j++] = s[k];
            }
            count += (int)s.size();
        }
        return count;
    }
};