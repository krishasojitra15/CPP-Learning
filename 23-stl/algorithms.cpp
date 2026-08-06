#include<iostream>
#include<vector>
#include<list>
#include <deque>
#include<set>
#include<unordered_set>
#include <algorithm>
using namespace std;

int main(){
    vector<pair<int,int>>vec = {{3,1},{2,1},{7,1},{5,2}};

    sort(vec.begin(),vec.end());

    for(auto p: vec){
        cout <<p.first << " " <<p.second<<endl;

    }
    return 0;
}