#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout <<"after push back size= " << vec.size() << endl;

    vec.pop_back();
    for(int val: vec){
        cout << val <<endl;
    }

    cout <<vec.back() << endl;

    cout <<vec.at(1) << endl;
    
    return 0;
}