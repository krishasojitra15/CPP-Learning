#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include<stack>
using namespace std;
class graph{
    public:
    bool iscycleDFS(int src, vector<bool> &vis,vector<bool> &recpath,vector<vector<int>> &edges){
        vis[src] = true;
        recpath[src] = true;

        for(int i=0;i<edges.size();i++){
            int v = edges[i][0];
            int u = edges[i][1];

            if(u ==src){
                if(!vis[v]){
                    if(iscycleDFS(v,vis,recpath,edges)){
                        return true;
                    } 
                }else if(recpath[v]){
                    return true;
                }
            }
        }
        recpath[src]=false;
        return false;
    }
    bool canfinish(int n,vector<vector<int>> &edges){
        vector<bool> vis(n,false);
        vector<bool> recpath(n,false);

        for(int i=0; i<n; i++){
            if(!vis[i]){
                if(iscycleDFS(i,vis,recpath,edges)){
                    return false;
                }
            }   
        }
        return true;
    }
};