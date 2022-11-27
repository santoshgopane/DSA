#include <iostream>
using namespace std;
int main()
{
    // This code uses binary as input Ex. 00000000000000000000000000001011. Solved this problem on LeetCode Console.
    int n = 000000000000000000000000000010111;
    int count = 0;
    while (n != 0)
    {
        if (n & 1) // Doing & operation with right-most bit.
        {
            count++;
        }
        n >>= 1;
    }
    cout << "Count: " << count << endl;
}