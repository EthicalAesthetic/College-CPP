#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    int *p1 = &a;
    int *p2 = &b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swap using pointers
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
