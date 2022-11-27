// Set, Map
#include <iostream>
#include <set>
#include <map>

using namespace std;
int main()
{
    /*
    SET
    set<int> s;

    s.insert(1);
    s.insert(6);
    s.insert(5);
    s.insert(7);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3); // O(log n) for each insert

    for (int i : s)
        cout << i << " ";

    cout << endl
         << *s.begin() << " | " << *s.end() + 1;

    // s.erase(*s.begin() + 2);
    s.erase(2);
    cout << endl;
    for (int i : s)
        cout << i << " ";
    // cout << endl
    //      << "Size: " << s.size();

    cout << endl
         << "Check if elemene 5 is present: " << s.count(2);
    set<int>::iterator itr = s.find(3);
    cout << endl
         << "Iterator/Pointer of element 3 is: " << *itr;
    */

    /*
   Map
    */
    map<int, string> m;
    m[1] = "Santosh";
    m[30] = "Bajirao";
    m[2] = "Gopane";

    m.insert({4, "AGAIN"});

    for (auto i : m)
        cout << "{" << i.first << ": " << i.second << "}" << endl;

    // cout << "Check if present: " << m.count(4);
    m.erase(30);
    cout << m.at(4);
    cout << endl
         << m.find(4);
    auto itr = m.find(5);
    for (int i = itr; i != m.end(); i++)
        cout << (*i).first;
}
