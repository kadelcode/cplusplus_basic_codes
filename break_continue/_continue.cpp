#include <iostream>

using namespace std;

// The continue statement skips the current iteration of the loop, and moves to the next iteration

int main() {
    int i;
    for (i = 1; i < 12; i++) {
        
        if (i==5) {
            continue;
        }
        // continue skips this statement when i = 5; and moves to the next iteration (i = 6).
        cout << i << "\n";
    }
}