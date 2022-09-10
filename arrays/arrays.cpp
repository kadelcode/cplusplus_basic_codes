#include <iostream>

using namespace std;

int main() {
    // Declaring an array in C++

    /* Method 1 */
    int arr[3]; // This array(arr) has length = 3
    arr[0] = 5;
    arr[1] = 10;
    arr[2] = 15;

    /* Method 2 */
    int arr1[] = {2, 4, 6, 8, 10};

    // print all values in arr1
    int n = 0;
    while (n <= 4) {
        cout << arr1[n] << endl;
        n++;
    }

    /* Method 3 */
    int arr2[4] = {1, 3, 5, 7};


    // Multidimensional Array

    int arr4[2][3] = {3,4,8,10,2,1}; // An array with 6 elements( 2 rows, 3 columns)
    cout << arr4[0][0];// access the value at position (0,0)

    
    return 0;
}