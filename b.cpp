#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

int main() {
    int num = 5;

    // Normal call
    int result1 = square(num);
    cout << "Normal call result: " << result1 << endl;

    // Function pointer
    int (*funcPtr)(int) = square;
    int result2 = funcPtr(num);

    cout << "Function pointer call result: " << result2 << endl;

    return 0;
}
