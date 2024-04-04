#include <bits/stdc++.h>
using namespace std;

#define N 4

void print_solution(int board[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0 ; j < N ; j++) {
            if(board[i][j]) cout << "Q ";
            else cout << ". ";
        }
        cout << '\n';
    }
}
bool isSafe(int board[N][N], int row, int col) {
    int i, j;
    for(i = 0; i < col; i++) {
        if(board[row][i]) return false;
    }
    for(i = row,j = col; i >= 0 and j >= 0; i--,j--) {
        if(board[i][j]) return false;
    }
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

        

    return 0;
}