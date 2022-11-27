// Array and Vectors;
#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    /*
    Arrays:
    */
    array<int, 4> arr = {1, 2, 3, 4};
    cout << arr.begin() << endl;
    cout << arr.end() << endl;
    cout << arr.empty() << endl;
    cout << arr.front() << endl; // 0th element
    cout << arr.back() << endl;  // last element
    cout << arr.at(0);           // value at ith index.

    /*
    VECTOR
    */

    vector<int> v;
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(10);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.push_back(11);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.push_back(12);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.push_back(13);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.push_back(14);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    cout << "Begin: " << *v.begin() << endl;
    cout << "End: " << *v.end() << endl;

    v.pop_back(); // pops last inserted element.

    for (int i : v)
        cout << i << " ";

    cout << endl
         << "Size before clear operation: " << v.size() << endl;

    v.clear();

    cout << endl
         << "Size after clear operation: " << v.size() << endl;

    vector<int> arr1(5, 1); //(size,element) if element is not given then 0.

    for (int i : arr1)
        cout << i << " ";

    vector<int> copied(arr1); // copy from one vector to another.

    cout << endl;

    for (int i : copied)
        cout << i << " ";
}