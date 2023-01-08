// Pointers
// pointer stores address (Pointer points to an address)
#include <iostream>
using namespace std;
int main()
{

    int num = 5;
    cout << "num: " << num << endl;
    cout << "Address of num: " << &num << endl; // (HexaDecimal format)

    // derefrence operator (dereferencing -> getting the value from given address in block.)
    int *ptr = &num;
    cout << "Address of num store in pointer: " << ptr << endl;
    cout << "Dereferencing the value stored in pointer: " << *ptr << endl;

    // Null pointer
    int num2 = 22;
    int *ptr1 = 0;
    cout << "Address stored in null pointer: " << ptr1 << endl;
    // cout << "Dereferencing null pointer: " << *ptr1 << endl; // compiler not even printing this, lol XD

    ptr = &num2;
    cout << "After assigning value to null pointer: " << ptr << " | " << *ptr << endl;
    int *ptr0 = &num;
    // (*ptr0)++;
    int newInt = (*ptr0)++; // here newInt is an independent variable store the pointers value
    cout << "value in  num: " << num << endl;
    cout << "value in  ptr0: " << *ptr0 << endl;
    cout << "newInt: " << newInt;

    // pointer to pointer (Copy pointer)
    int *q = ptr0;

    cout << "Address of ptr0: " << ptr0 << endl;
    cout << "Address of q: " << q << endl;

    cout << "Value store at address q: " << *q << endl;

    // what will happen if you try to do this? q = q + 1;
    q = q + 1; // it will increment the address value with respect to the size of variable ( 100 = 100 + 1) => 104 Reason: Size of int is 4 bytes.

    cout << "New address of q is: " << q << endl;
    cout << "Value stored at new  address of q is: " << *q; // garbage value

    // int a = 10;
    // int *p = &a;
    // int *q0 = p;   // this pointer is not double pointer as it is storing the "addres of the variable store in pointer p".
    // int **q1 = &p; // Stores the "address of the pointer p itself".
    // cout << "*q0: " << *q0 << endl;
    // cout << "Address of p: " << p << endl;
    // cout << "*q1: " << *q1 << endl;   // Single Dereference gets the value at address store in pointer q.(which is nothing but address of varibale store in p. lol) read it again!
    // cout << "**q1: " << **q1 << endl; // Double Dereference.

    // int a[] = {1, 5, 3, 4};
    // cout << a << " | " << *a << endl;
    // // cout << *(a) << " " << *(a + 1);

    // char b[] = "xyz";
    // cout << &b[0] << " | " << b << endl;
    // char *c = &b[0];
    // cout << c;

    /*
    Types of Pointers:
    1. Null Pointer : point to NULL / 0
    2. Double Pointer : points to a pointer
    3. Void Pointer : Cannot be dereferenced
    4. Wild Pointer : Pointer which is declared but not initialized. (BAD PRACTICE)
    5. Dangling Pointer : Pointer pointing to freed/deleted memory location.(It was pointiing to Variable but variable is deleted now)
    */
}
