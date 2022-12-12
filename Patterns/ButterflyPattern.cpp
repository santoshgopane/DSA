/*
 * _ _ _ _ _ _ *
 * * _ _ _ _ * *
 * * * _ _ * * *
 * * * * * * * *
 * * * * * * * *
 * * *     * * *
 * *         * *
 *             *
 */

#include <bits/stdc++.h>
using namespace std;
void printPattern(int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "* ";

        int printstars = size - i;
        while (printstars > 1)
        {
            cout << "    ";
            printstars -= 1;
        }

        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    // bottom stars
    int count = size;
    for (int k = size; k > 0; k--)
    {
        for (int j = 0; j < k; j++)
            cout << "* ";

        int printstars = size - count--;
        while (printstars > 0)
        {
            cout << "    ";
            printstars -= 1;
        }

        for (int j = 0; j < k; j++)
            cout << "* ";

        cout << endl;
    }

    return;
}

int main()
{
    int size;

    cout << "Enter the size of the Butterfly pattern:" << endl;
    cin >> size;

    printPattern(size);
}
