#include <iostream>
using namespace std;

int main() {
    
    int x= 10;
    int *ptr;
    ptr = &x;

    cout << "Value of x " << x << endl;
    cout << "Address of x " << &x << endl;

    cout << "Value stored in ptr " << ptr << endl;
    cout << "Value pointed to by ptr " << *ptr << endl;

    
    // Change value of x using pointer
    *ptr=23

    cout<< "new value of x " << x << endl;
    

    return 0;
}
