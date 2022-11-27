#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    int j = 0;
    for (int i = 0; i <= s.length() - 1; i++)
    {
        if (s[i] == ' ' || i == s.length() - 1)
        {
            reverse(s.begin() + j, s.begin() + ((i == s.length() - 1) ? i + 1 : i));
            j = i + 1;
        }
    }
    return s;
}

int main()
{
    string s = "Let's take LeetCode contest";
    cout << "Original String: " << s << endl;
    cout << "After Reversing: " << reverseWords(s);
}