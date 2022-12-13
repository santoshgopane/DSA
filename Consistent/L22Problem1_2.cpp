/* Character Arrays & String Lecture.
String :  1D Char Arrays
*/
#include <bits/stdc++.h>
using namespace std;

void reverseString(char ch[], int len)
{
    int start = 0, end = len - 1;
    for (; start < end;)
    {
        swap(ch[start++], ch[end--]);
    }
    return;
}

int getStringLength(char ch[])
{

    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
        count++;

    return count;
}

int main()
{
    char ch[19];
    cout << "Enter the string: ";
    cin >> ch;
    cout << "Entered String: " << ch << endl;
    int length = getStringLength(ch);
    cout << "Length of the string is: " << length << endl;
    reverseString(ch, length);
    cout << "Reversed String: " << ch << endl;

    return 0;
}
