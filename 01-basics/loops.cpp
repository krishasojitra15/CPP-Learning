#include <iostream>
using namespace std;

int main() {

    // For Loop
    cout << "For Loop:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }

    cout << endl;

    // While Loop
    int  n=20;
    int i =1;
    cout << "i: " << endl;
    while (i <= n) {
        cout <<i<< " ";
        i++;
    }

    cout << endl;

    // Do While Loop
    cout << "Do While Loop:" << endl;
    int j = 1;
    do {
        cout << j << " ";
        j++;
    } while (j <= 5);

    cout << endl;

    cout << "\n\nSum of 1 to 10:" << endl;
 
    // for loop example
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    cout << sum << endl;
    return 0;
    }