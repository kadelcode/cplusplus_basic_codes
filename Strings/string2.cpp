#include <iostream>

using namespace std;


int main() {
    // String object
    string text2;

    cout << "Enter a statement: ";
    // get the user input and store in variable text2
    getline(cin, text2);

    // write on the console
    cout << "Your input text is: ";
    cout << text2 << endl;

    return 0;
}