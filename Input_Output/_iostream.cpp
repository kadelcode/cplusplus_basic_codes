/*
- iostream is the standard input-output stream
- iostream is the header file that contains definitions to objects like cin, cout, cerr ...
*/

#include <iostream>

using namespace std;


// A global variable
int a;


int main() {
    // ___________STANDARD OUTPUT STREAM____________(cout)
    cout << "Enter a number:";



    // ____________STANDARD INPUT STREAM______________(cin)
    // read the input
    cin >> a;

    // Display the value of a
    cout << "The value you entered is " << a;


    char greeting[] = "\nGood morning ma'am";
    // output greeting
    cout << greeting;

    

    //______________UN-BUFFERED STANDARD ERROR STREAM______________(cerr)
    // cerr is used to output errors. it's an instance of the ostream class

    // output an error message
    cerr << "\nAn error occured";



    //______________BUFFERED STANDARD ERROR STREAM______________(clog)
    /* unlike cerr, the error is first inserted into a buffer and is stored in the buffer until
    it is not fully filled */
    clog << "\nAn error occured";

    return 0;
    
}