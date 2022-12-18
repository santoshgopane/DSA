// CodeStudio: Reverse String - II
#include <bits/stdc++.h>
using namespace std;

string reverseOrderWords(string str)
{
    int strLen = str.length() - 1;
    int wordLen = 0, insertIndex = 0;
    int i = strLen;
    while (insertIndex <= strLen && i > 0)
    {
        if (str[i] != ' ')
            wordLen++, i--;

        /* not needed for this problem
        else if ((str[i] == ' ') && (str[i + 1] == ' ' || str[i - 1] == ' '))
        {
            cout << "JERE" << endl;
            str.erase(i, 1);
            i = str.length() - 1;
            // cout << str;
            // break;
        }
        */
        else if (str[i] == ' ' && str[i + 1] != ' ')
        {
            str.insert(insertIndex, str.substr(i + 1, i + wordLen));
            insertIndex += wordLen;
            str.insert(insertIndex++, " ");

            str.erase(i + 1 + wordLen, i + wordLen);
            i = str.length() - 1, wordLen = 0;
        }
    }
    return str;
}

int main()
{
    string str = "no code has zero defects";
    cout << "Original String: " << str << "|" << endl;
    cout << "Reverse Order String:" << reverseOrderWords(str) << "|";
}