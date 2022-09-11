#include <iostream>

using namespace std;


int main() {
    // A string as an array of characters
    char text1[50];

    cout << "Enter a text:";

    // read user input
    cin.get(text1,50);

    cout << "You entered:" << text1;
 
    
    return 0;
}