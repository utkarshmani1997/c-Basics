#include <string.h>
#include <iostream>
using namespace std;

bool isPossible(int **board, int n, int row, int col) {
    // check if the queen is placed previously
    // in the same column in the previous rows.
    for(int i = row-1; i >= 0; i--)
        if(board[i][col] == 1)
            return false;

    // check if the queen is placed previously in the
    // upper left diagonal
    for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if(board[i][j] == 1)
            return false;

    // check if the queen is placed previously in the
    // upper right diagonal
    for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        if(board[i][j] == 1)
            return false;
    return true;
}

void placeQueens(int **board, int n, int row) {
    if(row==n) {
        // print the board with queens already placed
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++)
                cout << board[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        return;
    }

    // check for all rows and set the position 
    // with 1
    for(int col = 0; col < n; col++) {
        if(isPossible(board, n, row, col)) {
            board[row][col] = 1;
            placeQueens(board, n, row+1);
            board[row][col] = 0;
        }
    }
    return;
}

int main() {
    int n;
    cin >> n;
    int **board = new int*[n];
    for(int i=0; i<n; i++)
        board[i] = new int[n];
    placeQueens(board, n, 0);
    return 0;
}
