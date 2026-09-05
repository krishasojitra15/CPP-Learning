#include <iostream>
#include<vector>
#include <queue>
#include<list>
using namespace std;

class graph{
    int V;
    list<int> *l;

    public:
    graph(int V){
        this ->V =V;
        l= new list <int> [V];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void dfshelper(int u,vector<bool> &vis){
        cout <<u <<" ";
        vis[u] = true;

        for(int v : l[u]){
            if(!vis[v]){
                dfshelper(v,vis);
            }

        }
    }
    void dfs(){
        int src =0;
        vector<bool> vis(V,false);

        dfshelper(src,vis);
        cout <<endl;
    }
};

int main(){
    graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);

    cout <<"dfs: ";
    g.dfs();

    return 0;
}