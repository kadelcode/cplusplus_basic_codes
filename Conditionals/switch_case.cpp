#include <iostream>

using namespace std;


/* The switch statement can be used if you are checking on the value of a single variable */

int main() {
    int x;
    cout << "Enter a number:";
    cin >> x;

    switch (x)
    {
    case 1:
        /* code */
        cout << "x is 1";
        break;

    case 2:
        /* code */
        cout << "x is 2";
        break;

    case 3:
        /* code */
        cout << "x is 3";
        break;
    
    default:
        cout << "x is not 1, not 2, and not 3";
        break;
    }
    return 0;
}