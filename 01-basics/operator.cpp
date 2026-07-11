#include <iostream>
using namespace std;

int main() {
    int a=10;
    int b=20;
  

    // Arithmetic Operators
    cout << "=== Arithmetic Operators ===" << endl;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;



    cout << endl;

    // Assignment Operators
    cout << "=== Assignment Operators ===" << endl;
    int x = 10;

    int x = 10;

    x += 5;
    cout << x << endl;

    x -= 3;
    cout << x << endl;

    x *= 2;
    cout << x << endl;

    x /= 4;
    cout << x << endl;

    cout << endl;

    // Comparison Operators
    cout << "=== Comparison Operators ===" << endl;
   int a = 10;
   int b = 20;

    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;

    cout << endl;

    // Logical Operators
    cout << "=== Logical Operators ===" << endl;

    bool x = true;
    bool y = false;

    cout << (x && y) << endl;
    cout << (x || y) << endl;
    cout << (!x) << endl;

    cout << endl;

    // Increment & Decrement
    cout << "=== Increment & Decrement ===" << endl;

    int n = 5;

    cout << ++n << endl;
    cout << n++ << endl;
    cout << n << endl;

    cout << --n << endl;
    cout << n-- << endl;
    cout << n << endl;

    return 0;
}