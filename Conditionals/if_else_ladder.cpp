/* if else ladder allows one to check between multiple test expressions */

#include <iostream>

using namespace std;


int main() {
    int num;

    cout << "Enter a number:";
    cin >> num;

    if (num > 0) {
        cout << "You entered a positive integer";
    }

    else if (num == 0) {
        cout << "You entered 0";
    }

    else {
        cout << "You entered a negative number";
    }
    return 0;
}