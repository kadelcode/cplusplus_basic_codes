#include <iostream>

using namespace std;

int main() {
    // Method I for creating an enum variable
    enum day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}d;
    /* Sunday = 0
       Monday = 1
       Tuesday = 2
       Wednesday = 3
       Thursday = 4
       Friday = 5
       Saturday = 6

    */

    // Method II
    enum cardinal_point {North, West, South, East};

    // Accessing variable in Method I
    d = Sunday;
    cout << d << "\n";

    // Accessing variable in Method II
    cardinal_point c_point = West;
    
    cout << c_point;
    return 0;
}