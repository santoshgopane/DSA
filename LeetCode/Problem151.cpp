#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    string ans = "";
    int i = s.length() - 1;
    int j = i;
    while (j >= 0)
    {
        if ((s[j] == ' ' || j == 0) && s[i] != ' ')
        {
            ans += s.substr((s[j] == ' ') ? j + 1 : j, i - ((s[j] == ' ') ? j + 1 : j) + 1);
            j--, i = j;

            if (!ans.empty())
            {
                ans.append(" ");
            }
        }
        else if (s[j] != ' ')
        {
            j--;
        }
        else
        {
            i--, j--;
        }
    }
    ans.pop_back();
    cout << "Ans: " << ans << ", Length: " << ans.length();
    return s;
}
int main()
{
    string str = "the sky is blue";
    cout << str
         << ", Length: " << str.length() << endl;
    reverseWords(str);
}