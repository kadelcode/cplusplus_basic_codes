#include <iostream>

using namespace std;

// declaring variables
int a,b,c;

// function declaration
int sum(int ,int );

// inline function
inline int square(int s) {
    return s * s;
}

int main() {
    // invoking the function
    cout << sum(30,40) << "\n";
    cout << square(2);
    return 0;
}

// function definition
int sum(int a,int b) {
    c = a + b;
    return c;
}