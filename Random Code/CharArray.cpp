// Same code worked for string. because char array is causing problem due to space.
#include <bits/stdc++.h>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] == ' ' && name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseArray(char arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
        swap(arr[i], arr[size - i - 1]);
}

bool checkPalindrome(char s[], int size)
{
    int start = 0, end = size - 1;
    // cout << start << " " << end << endl;
    // s = tolower(s);
    // cout << s;
    while (start < end)
    {
        cout << start << " " << end << endl;
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

// void removeSpaces(char s[], int size)
// {
//     for (int i = 0; i < size)
// }

int main()
{
    char arr[99];
    cout << "Enter the String: ";
    cin >> arr;
    int size = getLength(arr);
    cout << endl
         << "Size of Char Array is: " << size << endl;
    // reverseArray(arr, size);
    // for (int i = 0; arr[i] != '\0'; i++)
    //     cout << arr[i];
    cout << "Palindrome: " << checkPalindrome(arr, size);
    // cout << isChar('c');
    // reverse(arr.begin(), arr.end());
    // for (int i : arr)
    //     cout << i;
}