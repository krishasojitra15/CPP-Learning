#include<iostream>
#include<vector>
using namespace std;

int main(){
    float price =100.25f;
    float *ptr =&price;

    cout << ptr << endl;
    cout << &price <<endl;
    
    return 0;
}