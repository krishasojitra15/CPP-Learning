#include<iostream>
using namespace std;

void reversearray(int arr[],int sz){
    int start =0, end= sz-1;
    while(start < sz){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}
int main(){
    int arr[] ={ 4,2,7,8,1,2,5};
    int sz=7;
    reversearray(arr,sz);

    for(int i=0;i<sz;i++){
        cout << arr[i] << " ";

    }
    cout <<endl;
    return 0;
}