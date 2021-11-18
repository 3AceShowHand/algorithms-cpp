//
// Created by Edison King on 2021/3/24.
//

#include <vector>
#include <iostream>

using namespace std;

int numRookCaptures(const vector<vector<char>>& board) {
    int result = 0;
    int row, col;
    bool find = false;
    for (row = 0; row < board.size(); ++row) {
        for (col = 0; col < board[0].size(); ++col) {
            if (board[row][col] == 'R') {
                find = true;
                break;
            }
        }
        if (find) {
            break;
        }
    }

    // go up
    for (int i = row - 1; i >= 0; --i) {
        if (board[i][col] >= 'A' && board[i][col] <= 'Z') {
            break;
        }
        if (board[i][col] == '.') {
            continue;
        }
        if (board[i][col] == 'p') {
            result += 1;
            break;
        }
    }

    // go down
    for (int i = row + 1; i < board.size(); ++i) {
        if (board[i][col] >= 'A' && board[i][col] <= 'Z') {
            break;
        }
        if (board[i][col] == '.') {
            continue;
        }
        if (board[i][col] == 'p') {
            result += 1;
            break;
        }
    }
    // go left
    for (int i = col - 1; i >= 0; --i) {
        if (board[row][i] >= 'A' && board[row][i] <= 'Z') {
            break;
        }
        if (board[row][i] == '.') {
            continue;
        }
        if (board[row][i] == 'p') {
            ++result;
            break;
        }
    }

    // go right
    for (int i = col + 1; i < board[0].size(); ++i) {
        if (board[row][i] >= 'A' && board[row][i] <= 'Z') {
            break;
        }
        if (board[row][i] == '.') {
            continue;
        }
        if (board[row][i] == 'p') {
            ++result;
            break;
        }
    }

    return result;
}

int main() {

    vector<vector<char>> board{
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','p','.','.','.','.'},
        {'.','.','.','R','.','.','.','p'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','p','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'}
    };

    cout << numRookCaptures(board) << endl;

    return 0;
}
