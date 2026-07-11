#include<iostream>
using namespace std;

int main(){
    //if-else age
    int age;
    cout << "Enter age: ";
    cin >> age;

    if(age >= 18){
        cout << "You can eligible for voting.\n";
    } else {
        cout << "You can not eligible for voting.\n";
    }

    cout << endl;
     
    //if-else even odd
    int number;
    cout << "Enter a number: ";
    cin  >> number;

    if(number%2==0){
        cout << "Number  is even.\n";
    }else{
        cout << "Number is odd.\n";
    }
     
    cout << endl;

    // else if
    int n;
    cout << "Enter a number: ";
    cin >> number;

    if(n>0){
        cout << "number is positive.\n";
    }else if(n<0){
        cout << "number is negative.\n";
    }else{
        cout << " number is zero.\n";
    }

    cout << endl;

    // ternary operator

    cout << (n>=0 ? "positive" : "negative") << endl;
    return 0;
}