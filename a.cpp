#include <iostream>
using namespace std;

// Global variable (stored in global/static memory)
int globalVar = 100;

int main() {
    // Local variable (stored on the stack)
    int localVar = 200;

    // Dynamically allocated variable (stored on the heap)
    int* heapVar = new int(300);

    cout << "Global variable:" << endl;
    cout << "  Value   = " << globalVar << endl;
    cout << "  Address = " << &globalVar << "  (Global / Static memory)" << endl;

    cout << "\nLocal variable:" << endl;
    cout << "  Value   = " << localVar << endl;
    cout << "  Address = " << &localVar << "  (Stack memory)" << endl;

    cout << "\nDynamically allocated variable:" << endl;
    cout << "  Value   = " << *heapVar << endl;
    cout << "  Address = " << heapVar << "  (Heap memory)" << endl;

    // Free dynamically allocated memory
    delete heapVar;

    return 0;
}
