#include <bits/stdc++.h>
using namespace std;
// the sky is blue => blue is sky the

string pushToString(string mainString, int start, int end)
{
    string ans = "";
    for (int i = start + 1; i <= end; i++)
        ans.push_back(mainString[i]);
    // cout << ansString << endl;
    return ans;
}

string reverseWords(string s)
{
    string ans = "";
    int i = s.length() - 1;
    int wordLength = 0;
    while (i >= 0)
    {
        if (s[i] != ' ' && i != 0)
        {
            // cout << "e";
            wordLength++;
        }
        else
        {
            // cout << s[i] << endl;
            string tempAns = pushToString(s, (i > 0 ? i : -1), i + wordLength);
            ans = ans + tempAns + " ";
            cout << "A: " << ans << endl;
            wordLength = 0;
        }
        i--;
    }
    return ans;
}
int main()
{
    string s = "the sky is blue";
    cout << reverseWords(s);
}