/*
A pointer is a variable that holds the address of another variable
*/

#include <iostream>

using namespace std;


int main() {
    int num = 9; // num is an integer variable
    int *p; // p is an integer pointer variable
    int arr[] = {1,2,3,4,5};

    // assigning the address of num to p
    p = &num;
    int *t = arr; // assigning a pointer variable to an array is different.
    // The arr name alone represents the base address of array.

    // access the value of the pointer
    cout << "Address of num:" << p << "\n";

    // access the value of the integer variable
    cout << "Value of num:" << *p << "\n";

    // access the address of the pointer variable itself
    cout << "Address of the pointer variable(p):" << &p << "\n";

    cout << "Address of the array pointer(t):" << t << "\n";

    return 0;
}