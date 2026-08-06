#include<iostream>
#include<vector>
#include<list>
#include <deque>
#include<set>
using namespace std;

int main(){
    multiset<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(1);
    s.insert(2);
    s.insert(3);
    

    for(auto val :s){
        cout << val << " ";

    }
    cout << endl;

    return 0;
}
