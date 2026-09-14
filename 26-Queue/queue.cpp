#include<iostream>
#include<queue>
#include<deque>
using namespace std;

int main(){
    queue<int> q;
    deque<int> dq;

    q.push(1);
    q.push(2);
    q.push(3);
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);

    dq.pop_back();
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << dq.front() << " "<<dq.back()<< endl;

    cout << endl;
    return 0;
}