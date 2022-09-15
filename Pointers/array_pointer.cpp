#include <iostream>

using namespace std;

int main() {
    // declaring a pointer variable(integer)
    int *p;

    // declaring an array variable
    int arr[] = {1,2,3,4,5};

    // storing the memory address of arr in p:
    p = arr;

    // access all the value in arr, using p:
    for (int i=0; i < 5; i++) {
        cout << *p << "\n";
        // Move the pointer to the next location inside the array
        p++;
    }
    

    return 0;
}