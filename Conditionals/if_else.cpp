#include <iostream>

using namespace std;


int main() {
    int num;

    cout << "Enter a number:";
    cin >> num;

    if (num > 0) {
        cout << "You entered a positive integer";
    }

    else {
        cout << "You either entered 0 or a negative number";
    }
    return 0;
}