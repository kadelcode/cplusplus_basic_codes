#include <iostream>

using namespace std;

// Creating the sum_array function (for summing up two arrays)
void sum_array(int arr1[], int arr2[]) {
    int sum[5];
    int i;
    for (i = 0; i <= 5; i++) {
        sum[i] = arr1[i] + arr2[i];
        cout << sum[i] << endl;
    }
    
}


// Main Function
int main() {
    int x[5] = {1, 5, 8, 10, 20};
    int y[5] = {2, 4, 3, 2, 1};
    
    // calling the sum_array function
    sum_array(x,y);
    return 0;
}