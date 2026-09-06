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

    bool iscycleundirDFS(int src, int par, vector<bool> &vis){
        vis [src] = true;
        list<int> neighbours = l[src];

        for(int v: neighbours){
            if(!vis[v]){
                if(iscycleundirDFS(v,src,vis)){
                    return true;
                }
            }else if(v !=par){
                return true;
            }
        }
        return false;
    }

    bool iscycle(){
        vector<bool> vis(V,false);
        for(int i=0; i<V; i++){
            if(!vis[i]){
                if(iscycleundirDFS(i,-1,vis)){
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){
    graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);

    cout <<g.iscycle() << endl;

    return 0;
}