// #include <bits/stdc++.h>
// using namespace std;

// const int INF = 1e9;

// int32_t main() {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     // int n, e;
//     // cin >> n >> e;

//     // int dis[4][4];
    
//     // for(int i = 1; i <= n; i++) {
//     //     for(int j = 1; j <= n; j++) {
//     //         dis[i][j] = INF;
//     //         if(i == j)  dis[i][j] = 0;
//     //     }
//     // }

//     // while(e--) {
//     //     int a, b, w;
//     //     cin >> a >> b >> w;
//     //     dis[a][b] = w;
//     // }
//     int n = 4;
//     int dis[4][4] = 
//     {
//         {0,1,-2,INF},
//         {4,0,3,INF},
//         {INF,INF,0,2},
//         {5,INF,INF,0}
//     };
//     for(int k = 1; k <= n ; k++) {
//         for(int i = 1; i <= n; i++) {
//             for(int j = 1; j <= n; j++) {
//                 if(dis[i][k] + dis[k][j] < dis[i][j]) {
//                     dis[i][j] = dis[i][k] + dis[k][j];
//                 }
//             }
//         }
//     } 
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {
//             if(dis[i][j] == INF) cout << "INF" << " ";
//             else cout << dis[i][j] << " "; 
//         }
//         cout << '\n';
//     }

//     return 0;
// }




#include <iostream>
using namespace std;
#define nV 4
#define INF 999
void printMatrix(int matrix[][nV]);
void floydWarshall(int graph[][nV]) {
    int matrix[nV][nV], i, j, k;

    for (i = 0; i < nV; i++)
        for (j = 0; j < nV; j++)
            matrix[i][j] = graph[i][j];
    for (k = 0; k < nV; k++) {
        for (i = 0; i < nV; i++) {
            for (j = 0; j < nV; j++) {
                if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
    }
    printMatrix(matrix);
}
void printMatrix(int matrix[][nV]) {
    for (int i = 0; i < nV; i++) {
        for (int j = 0; j < nV; j++) {
            if (matrix[i][j] == INF)
                printf("%4s", "INF");
            else
                printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {

    // int graph[nV][nV] =
    // {
    //     {0,1,-2,INF},
    //     {4,0,3,INF},
    //     {INF, INF,0,2},
    //     {5,INF,INF,0}
    // };
    int graph[nV][nV];
    // cout << "Enter the adjacency matrix for the graph (" << nV << "x" << nV << "):\n";
    for (int i = 0; i < nV; i++) {
        for (int j = 0; j < nV; j++) {
            // cout << "Enter weight for edge from vertex " << i << " to vertex " << j << " (or INF if no direct edge): ";
            cin >> graph[i][j];
        }
    }

    floydWarshall(graph);
}
/*
6
1 2 1
2 1 4
1 3 -2
4 1 5
3 4 2
2 3 3

*/