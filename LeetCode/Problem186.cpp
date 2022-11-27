#include <bits/stdc++.h>
using namespace std;
// the sky is blue => blue is sky the

void reverserWords(vector<char> &v)
{
    int i = v.size() - 1;
    int wordLen = 0;
    int j = 0;
    while (i > j)
    {
        if (v[i] == ' ' || i == 0)
        {
            cout << endl
                 << "WordLength: " << wordLen;

            int tempWordLen = wordLen;

            for (int k = i + 1; wordLen > 0; k += 2)
            {
                v.insert(v.begin() + j, v[k]);
                wordLen--;
                j++;
            }
            v.insert(v.begin() + j++, ' ');

            while (tempWordLen >= 0)
            {
                v.pop_back();
                tempWordLen--;
            }
            i = v.size() - 1;
        }
        else if (v[i] != ' ')
        {
            wordLen++;
            i--;
        }
    }
}

int main()
{
    vector<char> v = {'t', 'h', 'e', ' ', 'm', 'a', 'n', ' ', 'i', 's', ' ', 'n', 'i', 'c', 'e'};
    // vector<char> v = {'s', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};
    // vector<char> v = {'s'};
    cout
        << "Original Array: ";

    for (char i : v)
        cout << i << " ";
    reverse(v.begin(), v.end());

    // reverserWords(v);
    cout << endl;

    for (char i : v)
        cout << i;
}