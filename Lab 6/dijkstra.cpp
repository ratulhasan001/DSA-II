#include <bits/stdc++.h>
using namespace std;

using pii = pair < int, int > ;
const int N = 1e3 + 7;
const int INF = 1e9 + 7;
vector < pii > g[N];
vector < bool > visited(N);
vector < int > dist(N, INF);
vector < int > par(N, -1);
vector < int > path;

void dijkstra (int source) {

    priority_queue < pii, vector < pii >, greater < pii > > pq;
    dist[source] = 0;
    pq.push({0, source});
    
    while(!pq.empty()) {
        int parent = pq.top().second;
        pq.pop();
        visited[parent] = true;

        for(pii child_pair : g[parent]) {

            int child_node = child_pair.first;
            int child_cost = child_pair.second;

            if(!visited[child_node] and dist[child_node] > dist[parent] + child_cost) {
                
                dist[child_node] = dist[parent] + child_cost;
                pq.push({dist[child_node], child_node});
                par[child_node] = parent;   
            }
        }
    }
}
int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    int source;
    cin >> source;
    dijkstra(source);

    // all sources distance

    for(int i = 1; i <= n; i++) {
        cout << "Distance of node " << i << " :" << dist[i] << '\n'; 
    }

    // path printing 
    
    if(dist[n] == INF) {
        cout << "No path" << '\n';
    }
    else {
        for(int parent = n; parent != -1; parent = par[parent]) {
            path.push_back(parent);
        }
        reverse(path.begin(), path.end());
        for(auto x : path) {
            cout << x << " ";
        }
    }
    
    return 0;
}


/*
3 3
1 2 10
2 3 3
3 1 20
1



*/