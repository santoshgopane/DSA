#include <bits/stdc++.h>
using namespace std;

// From CodeStudio: Check if palindrome (ignore symbols and whitespaces)
bool isPalindromeCS(string s)
{
    int start = 0, end = s.length() - 1;
    while (start < end)
    {
        if ((isalpha(s[start]) || isdigit(s[start])) && (isalpha(s[end]) || isdigit(s[end])))
        {

            if (char(tolower(s[start++])) != char(tolower(s[end--])))
            {
                cout << "NOE";
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

bool isPalindrome(string s)
{
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char string[9]; // = {'s', 'a', 'n'};
    cout << "Enter a string: ";
    cin >> string;
    cout << "Is entered string is palindrome: " << isPalindromeCS(string);
}