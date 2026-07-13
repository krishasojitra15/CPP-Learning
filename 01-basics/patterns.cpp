#include<iostream>
using namespace std;

int main(){
   
    // square pattern
    int n=4;
    char ch ='a';
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            cout<<ch;
            ch++;
        }
        cout << endl;
    }

    // triangle pattern
    int num=1;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<i+1;j++){
            cout<<  (i+1) <<" ";
           

        }
        cout << endl;
    }

    // reverse triangle pattern
    for(int i=0; i<n;i++){
        for(int j=i+1; j>0;j--){
            cout << j<< " ";
        }
        cout << endl;
    }

    // inverted triangle pattern
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            cout << " ";
        }

        for(int k=0;k<n-i;k++){
            cout << (i+1);
        }

        cout << endl;
    }

    // pyramid pattern
    for(int i=0; i<n ;i++){
        for(int j=0;j<(n-i-1);j++){
            cout << " ";

        }
        for( int j=1;j<=i+1;j++){
            cout << j;
        }
        for(int j=i;j>0;j--){
            cout << j;
        }
        cout << endl;

    }

   return 0;
    }
