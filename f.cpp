#include <iostream>
using namespace std;

int main() {
    // Create dynamic integer
    int* ptr = new int;

    // Assign value through pointer
    *ptr = 10;

    cout << "Initial value: " << *ptr << endl;

    // Modify value through pointer
    *ptr = 25;

    cout << "Modified value: " << *ptr << endl;

    // Properly delete dynamic memory
    delete ptr;

    // Avoid dangling pointer
    ptr = nullptr;

    return 0;
}
