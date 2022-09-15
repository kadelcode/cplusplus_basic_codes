#include <iostream>

using namespace std;


int main() {
    int existing_variable = 34;

    // declaring and initializing a reference variable
    int &reference_variable = existing_variable;

    // multiplying the reference variable by 2
    reference_variable *= 2;

    cout << "Existing Var: " << existing_variable << "\n";
    cout << "Reference Var: " << reference_variable << "\n";
    
    cout << "After Multipliying the reference variable by 2" << "\n";
    cout << "Existing Var: " << existing_variable << "\n";
    cout << "Reference Var: " << reference_variable << "\n";
    return 0;
}