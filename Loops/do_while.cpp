#include <iostream>

using namespace std;

/*
The body of the do..while loop is executed at least once, then the test expression is evaluated
*/

int main() {
    int num;
    int sum;

    do{
        printf("Enter a number or zero to stop:");
        scanf("%d", &num);
        sum += num;
    }

    while(num != 0);
    printf("Sum = %d", sum);

    return 0;
}