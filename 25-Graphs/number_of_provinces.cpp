#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class solution {
    public: 
    void dfs(int i,vector<vector<int>>& adj, vector<bool> &vis){
        vis[i] =true;

        for(int j=0; j<adj[i].size(); j++){
            if(adj[i][j] == 1 && !vis[j]){
                dfs(j,adj,vis);
            }
        }
    }

    int findcircleNum(vector<vector<int>>& isconnected){
        int numofprovinces =0;
        int n = isconnected.size();

        vector<bool> vis(n,false);

        for(int i=0; i<n; i++){
            if(!vis[i]){
                dfs(i, isconnected,vis);
                numofprovinces++;
            }
        }
        return numofprovinces;
    }
};