#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int size = chars.size();
    cout << endl;
    // for (auto i : master)
    //     cout << i.first << " " << i.second << endl;
    int i = 0;
    vector<char>::iterator itr1, itr2;
    while (i < chars.size())
    {
        // map<char, int> master;
        int count = 1;
        for (int idx = i; chars[idx] == chars[idx + 1] && (idx + 1 < chars.size()); idx++)
            count++;

        // cout << "Index: " << i << " Count: " << count << endl;
        if (count > 1 && count < 10)
        {
            // cout << "it will occupy 2 places: "<<count;
            char aChar = '0' + count;
            chars[i + 1] = aChar;
            // cout<<"chars[i + 1]: "<<chars[i+1];
            itr1 = chars.begin() + i + 2;
            itr2 = chars.begin() + i + count;
            chars.erase(itr1, itr2);
            i += 2;
        }
        else if (count >= 10)
        {
            // cout << "it will take more than 2 places: "<<count<<endl;
            vector<char> v;
            // convert string to character array to append in the main vector
            int tempCount = count;
            while (tempCount > 0)
            {
                // cout << "T:" << tempCount % 10 << endl;
                v.push_back(tempCount % 10);
                tempCount /= 10;
            }
            reverse(v.begin(), v.end());
            for (int j = 0; j < v.size(); j++)
            {
                char aChar = '0' + v[j];
                // cout << aChar << endl;
                chars[i + 1 + j] = aChar;
                // cout << "N:" << chars[i + 1 + j] << endl;
            }
            // cout<<"Size of vector: "<<v.size()<<endl;
            // cout<<"ith index: "<<i<<endl;
            // cout<<"begin: "<<i+v.size()+1<<" ";
            // cout<<"end: "<<i+count<<" "<<endl;
            // i += v.size();
            itr1 = chars.begin() + i + v.size() + 1;
            itr2 = chars.begin() + i + count;
            chars.erase(itr1, itr2);
            i += (v.size() + 1);
            v.clear();
            // break;
        }
        else
        {
            i++;
        }
    }
    // cout << "chars" << endl;
    for (int i : chars)
        cout << char(i) << " ";
    return chars.size();
}
int main()
{
    vector<char> v;
    v.push_back('a');
    v.push_back('a');

    cout << "Original Array: ";
    for (int i : v)
        cout << char(i) << " ";
    cout << endl;
    int size = compress(v);
    cout << endl
         << "Size of the array: " << size;
}