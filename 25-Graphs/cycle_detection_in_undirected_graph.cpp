#include <iostream>
#include <vector>
#include <queue>
#include <list>
using namespace std;

class graph{
    int V;
    list<int> *l;

    public:
    graph(int V){
        this->V=V;
        l = new list <int> [V];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    bool iscycleundirBFS(int src,vector<bool> &vis){
        queue<pair<int,int>>q;

        q.push({src,-1});
        vis[src] = true;

        while(q.size()>0){
            int u = q.front().first;
            int parU = q.front().second;
            q.pop();

            list<int> neighbors =l[u];
            for(int v :neighbors){
                if(!vis[v]){
                    q.push({v,u});
                    vis[v] = true;
                }else if(v != parU){
                    return true;
                }
            }
       }
       return false;
    }

    bool iscycle(){
        vector<bool> vis(V,false);

        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(iscycleundirBFS(i,vis)){
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
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,4);

    cout <<g.iscycle() << endl;

    return 0;  
}