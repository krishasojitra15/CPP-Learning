#include <iostream>
#include <vector>
#include <queue>
#include <list>
using namespace std;

class graph {
    int V;
    list<int>*l;

    public:
    graph(int V){
        this->V = V;
        l=new list<int> [V];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
    }

        bool iscycleDirDFS(int curr,vector<bool>&vis, vector<bool> &recpath){
            vis[curr] = true;
            recpath[curr]= true;

            for(int v : l[curr]){
                if(!vis[v]){
                    if(iscycleDirDFS(v,vis,recpath)){
                        return true;
                    }
                }else if(recpath[v]){
                    return true;
                }
            }

            recpath[curr] = false;
            return false;
        }

        bool  iscycle(){
            vector<bool> vis(V,false);
            vector<bool> recpath(V,false);

            for(int i=0;i<V;i++){
                if(!vis[i]){
                    if(iscycleDirDFS(i,vis,recpath)){
                        return true;
                    }
                }
            }
            return false;
        }
};

int main(){
    graph g(4);

    g.addEdge(1,0);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(3,0);

    cout << g.iscycle() << endl;
    return 0;
}