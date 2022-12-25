#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector <vector<int>> adj(N);
queue<int> q;
bool vis[N];


void bfs(int source){
    vis[source] = 1;
        q.push(source);

    while (!q.empty()){
    int node = q.front();
    q.pop();
    cout << node << endl;
    for(int i=0;i<adj[node].size();i++){
        int k = adj[node][i];  
        if(!vis[k]){
            vis[k] = 1;
            q.push(k);
            }
        }
    }
}


int main(){
    int n,m,x,y;
    cin >> n >> m;
    memset(vis,0,sizeof(vis));

    for(int i=0;i<n;i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bfs(1);

}



