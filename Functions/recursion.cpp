#include <iostream>

using namespace std;


int fact(int);
// recursive function(finding the factorial of a number)
int fact(int n) {
    if (n <= 1) {
        return 1;
    }

    else {
        return n * fact(n-1);
    }
}

int main() {
    // calling the fact function
    cout << fact(3);
}