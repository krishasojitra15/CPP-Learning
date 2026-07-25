#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int a=10;
    int *ptr =&a;

    cout << ptr <<endl;
    ptr++;
    cout << ptr << endl;

    // add/substact 
    cout <<ptr <<endl;
    ptr= ptr +2;
    cout << ptr << endl;

    // subtract ptr
    int *ptr2;
    int *ptr1 =ptr2 +2;

    cout <<ptr1-ptr2 << endl;

    return 0;
}