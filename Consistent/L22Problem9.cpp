// String Compression
#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int letterCount = 1;
    for (int i = 0; i < chars.size(); i++)
    {
        for (int j = i; j < chars.size() - 1 && chars[j] == chars[j + 1]; j++)
        {
            letterCount++;
        }
        // Insert the digit
        // Erase the letters from digiLen to i+lettercount pos
        int digit = letterCount, digiLen = 0;
        if (letterCount > 1)
        {
            while (digit > 0)
            {
                chars.insert(chars.begin() + i + 1, (digit % 10) + '0');
                digit = digit / 10;
                digiLen++;
            }
            chars.erase(chars.begin() + i + digiLen + 1, chars.begin() + i + letterCount + digiLen);
        }

        i += digiLen;
        letterCount = 1;
    }
    cout << "Final:" << endl;
    for (char i : chars)
        cout << i << " ";
    return chars.size();
}

int main()
{
    vector<char> v;
    v.push_back('a');
    v.push_back('a');
    v.push_back('a');
    v.push_back('a');
    v.push_back('a');
    v.push_back('a');
    v.push_back('a');
    v.push_back('a');
    v.push_back('a');
    v.push_back('a');
    v.push_back('a');
    v.push_back('a');
    v.push_back('a');
    v.push_back('b');
    v.push_back('b');
    v.push_back('b');

    v.push_back('c');
    v.push_back('c');
    v.push_back('c');
    // v.insert(v.begin() + 1, 5 + '0');
    // v.erase(v.begin(), v.begin() + 2);

    for (auto i : v)
        cout << i << " ";
    cout << endl;

    cout << endl
         << "Something:"
         << compress(v);
}