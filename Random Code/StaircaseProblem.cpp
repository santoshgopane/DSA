// number of ways you can climb the stair.
#include <iostream>
using namespace std;

bool isSolution(int steps, int mid)
{
    return true;
}

int main()
{
    int steps = 4;
    int start = 0;
    int end = steps * steps;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (isSolution(steps, mid))
            break;
        mid = start + (end - start) / 2;
    }
    cout << "Answer: " << ans;
}