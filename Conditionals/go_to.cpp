#include <iostream>

using namespace std;


int main() {
    int num;
    cout << "Enter a number:";
    cin >> num;

    if(num <= 0)
        goto end;
    
    cout << "The number you entered is:" << num;

    end:
        cout << "\nExecution stopped!. All the statement after the if block skipped, because your input was zero";
}