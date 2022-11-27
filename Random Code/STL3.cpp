// Stack , Queue
#include <iostream>
#include <stack>
#include <queue>

using namespace std;
int main()
{
    /*
    Stack

    stack<string> s;
    cout << s.size() << endl;
    s.push("Santosh");
    s.push("Bajirao");
    s.push("Gopane");
    cout << s.size();
    cout << s.top();
    s.pop();
    s.pop();
    s.pop();
    cout << endl
         << s.empty();
    */

    /*
    Queue
    queue<string> q;

    q.push("Santosh");
    q.push("Bajiroa");
    q.push("Gopane");
    // q.pop();
    cout << q.front();
    cout << q.back();
    cout << q.size();
    // cout << q.top();
    */

    /*
    Priority Queue
    */
    priority_queue<int> q; // to get maximum element(max heap).

    q.push(1);
    q.push(6);
    q.push(2);
    q.push(0);
    // cout << q.top();
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> q1; // to get minimum element(min heap).

    q1.push(1);
    q1.push(6);
    q1.push(2);
    q1.push(0);
    // cout << q1.top();
    int n1 = q1.size();

    for (int i = 0; i < n1; i++)
    {
        cout << q1.top() << " ";
        q1.pop();
    }
}