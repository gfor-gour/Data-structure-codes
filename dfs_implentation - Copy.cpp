#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector <vector<int>> adj(N);
bool vis[N];

void dfs(int node){
    vis[node] = 1;
    cout << node << endl;

    for(int i=0;i<adj[node].size();i++){

            if(!vis[adj[node][i]]){
                //cout << "calling node " << adj[node][i] << endl;
                dfs(adj[node][i]);
            }
    }

}

int main(){
    memset(vis,0,sizeof(vis));
    int n,m;
    cin >> n >> m;
        for(int i=0;i<m;i++){
            int x,y;
                cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
    dfs(1);

}