#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {

    int n;
    cin >> n;
    int g[n][n];
    // int g[4][4] = 
    // {
    //     {0,1,-2,INF},
    //     {4,0,3,INF},
    //     {INF,INF,0,2},
    //     {5,INF,INF,0}
    // };
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> g[i][j];
        }
    }
    for(int k = 0; k < n ; k++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(g[i][k] + g[k][j] < g[i][j]) g[i][j] = g[i][k] + g[k][j];
            }
        }
    } 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(g[i][j] == INF) cout << "INF" << " ";
            else cout << g[i][j] << " "; 
        }
        cout << '\n';
    }

    return 0;
}
