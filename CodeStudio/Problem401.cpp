#include <iostream>
using namespace std;
int main()
{
    int s = 5;
    // Defind ans vector<vector<int>> here to return.
    int arr[99] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                cout << "Create a new vector." << endl;
                cout << "Push max first" << endl;
                cout << "Push min second" << endl;
                cout << "push temp vector to ans vector." << endl;
            }
        }
    }
    // sort(ans.begin(),ans.end()); sorting
    //  return ans from the function(after STL).
}