#include <iostream>
using namespace std;

int main() {
    int a = 25;        // Original variable
    int *ptr = &a;    // Pointer storing address of a
    int b = 0;         // Third variable

    // Copy value using dereferencing
    b = *ptr;

    cout << "Value of a: " << a << endl;
    cout << "Value of b (copied using pointer): " << b << endl;

    return 0;
}
