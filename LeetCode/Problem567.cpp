#include <bits/stdc++.h>
using namespace std;

// bool checkInclusion(string s1, string s2)
// {
//     map<char, int> master;

//     for (int i = 0; i < s1.length(); i++)
//         master[s1[i]]++;

//     for (int i = 0; i <= s2.length() - s1.length(); i++)
//     {
//         map<char, int> temp;
//         string tempStr = s2.substr(i, s1.length());
//         cout << tempStr << endl;
//         for (int j = 0; j < tempStr.length(); j++)
//             temp[tempStr[j]]++;
//         cout << "TEMP" << endl;
//         for (auto i : temp)
//             cout << i.first << " " << i.second << endl;
//         if (master == temp)
//         {
//             cout << "HERE";
//             return true;
//         }
//     }
//     cout << "MASTER" << endl;
//     for (auto i : master)
//         cout << i.first << " " << i.second << endl;
//     return false;
// }

bool checkIfEqual(int arr1[], int arr2[])
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

    for (int i = 0; i < 26; i++)
        cout << master[i] << " ";

    for (int i = 0; i <= s2.length() - s1.length(); i++)
    {
        int temp[26] = {0};
        string tempStr = s2.substr(i, s1.length());

        cout << endl
             << tempStr << endl;

        for (int j = 0; j < tempStr.length(); j++)
            temp[tempStr[j] - 'a']++;

        for (int i = 0; i < 26; i++)
            cout << temp[i] << " ";

        if (checkIfEqual(master, temp))
        {
            cout << "HERE";
            return true;
        }
    }

    return false;
}
int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout << endl
         << checkInclusion(s1, s2);
}
