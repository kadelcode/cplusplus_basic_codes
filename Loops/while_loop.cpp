#include <iostream>

using namespace std;


int main() {
    int i;
    int num;

    cout << "Enter a number for its multiplication table: ";
    cin >> num;

    while (i < 13) {
        printf("%d X %d = %d",num,i,num * i);
        cout << "\n";
        ++i;
    }

    return 0;
}