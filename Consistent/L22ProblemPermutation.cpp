// CONTINUOUS Permutation in String
#include <bits/stdc++.h>
using namespace std;

bool isMatching(int arr1[], int arr2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
            return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2)
{
    int master[26] = {0};
    for (int i = 0; i < s1.length(); i++)
        master[s1[i] - 'a']++;

    for (int i = 0; i < s2.length(); i++)
    {
        int temp[26] = {0};

        string tempStr = s2.substr(i, s1.length());
        for (int j = 0; j < tempStr.length(); j++)
            temp[tempStr[j] - 'a']++;

        if (isMatching(master, temp))
            return true;
    }

    return false;
}

int main()
{
    string str1 = "ab";
    string str2 = "eidbaooo";
    cout << endl
         << checkInclusion(str1, str2);
}
