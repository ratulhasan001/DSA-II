#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector < int > g[N];
vector < bool > visited(N, false);

void bfs(int source) {
    queue < int > q;
    q.push(source);
    visited[source] = true;
    while (!q.empty()) {
        int parent = q.front();
        q.pop();
        cout << parent << ' ';
        for (int child : g[parent]) {
            if (!visited[child]) {
                q.push(child);
                visited[child] = true;
            }
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e;
    cin >> n >> e;
    while (e--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u); 
    }
    int source;
    cin >> source;
    bfs(source);

    return 0;
}