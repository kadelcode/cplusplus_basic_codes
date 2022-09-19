#include <iostream>

using namespace std;

// The break statement ends the loop, immediately it is encountered

int main() {
    int i;
    for (i = 1; i < 12; i++) {
        
        if (i==5) {
            break;
        }
        // Loops execution stops when i = 5
        cout << i << "\n";
    }
}