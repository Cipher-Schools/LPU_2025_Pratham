#include <iostream>
using namespace std;

// 1. No return, no parameter
void greet() {
    cout << "Hello World!" << endl;
}

// 2. No return, with parameter
void printSum(int a, int b) {
    cout << "Sum = " << a + b << endl;
}

// 3. Return, no parameter
int getNumber() {
    return 5;
}

// 4. Return, with parameter
int add(int x, int y) {
    return x + y;
}

int main() {
    greet();
    printSum(3, 4);
    cout << "Number = " << getNumber() << endl;
    cout << "Addition = " << add(10, 20);
}
