#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 10;
    int x = 010;
    int y = 001;
    int c;

    //  Arithmetic Operators
    c = a + b; // c = 15 (Addition)
    c = a - b; // c = 5 (Substraction)
    c = a * b; // c = 50 (Multiplication)
    c = a / b; // c = 0 (Division)
    c = a % b; // c = 5 (Modulus)

    //  Relational Operators
    a < b; // less than
    a > b; // greater than
    a <= b; // less than or equal to
    a >= b; // greater than or equal to
    a == b; // double equal to
    a != b; // not equal to

    //  Logical Operators (used to test for more than one condition)
    (a < b) && (b > a);
    (a > b) || (b > a);
    bool d = !(b > a);

    //  Increment and Decrement Operators
    c = ++a; // c = 6, a = 6
    c = a++; // c = 5, a = 6
    c = --a; // c = 4, a = 4

    //  Bitwise Operators
    int e = x & y; // Bitwise AND
    int f = x | y; // Bitwise OR
    int g = x ^ y; // Bitwise exclusive OR
    int h = x << y; // left shift
    int i = x >> y; // right shift

    cout << "\n" << e;
    cout << "\n" << f;
    cout << "\n" << g;
    cout << "\n" << h;
    cout << "\n" << i;


    return 0;
}