#include <bits/stdc++.h>
using namespace std;
int getStringLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
        count++;
    cout << "Size: " << count;
    return count;
}

char getMaxOccuringChar(char arr[], int size)
{
    map<char, int> m1;
    int max = 0;
    char ans;
    for (int i = 0; i < size; i++)
    {
        m1[arr[i]]++;
        if (max < m1[arr[i]])
        {
            max = m1[arr[i]];
            ans = arr[i];
        }
        else if (max == m1[arr[i]])
        {
            ans = (ans > arr[i]) ? arr[i] : ans;
        }
    }
    // for (auto i : m1)
    //     cout << i.first << " " << i.second << endl;
    return ans;
}

int main()
{
    char arr[999];
    cin.getline(arr, 77);
    cout << strlen(arr);
    // cout << getMaxOccuringChar(arr, getStringLength(arr));
}