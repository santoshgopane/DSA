class Solution
{
public:
    bool isPalindrome(string s)
    {
        int start = 0, end = s.length() - 1;
        while (start < end)
        {
            if ((isalpha(s[start]) || isdigit(s[start])) && (isalpha(s[end]) || isdigit(s[end])))
            {
                if (char(tolower(s[start++])) != char(tolower(s[end--])))
                {
                    return false;
                }
            }
            else if (!(isalpha(s[start]) || isdigit(s[start])))
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return true;
    }
};