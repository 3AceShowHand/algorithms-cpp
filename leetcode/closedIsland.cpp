//
// Created by Edison King on 2021/3/13.
//

#include <vector>
#include <iostream>

using namespace std;

bool solver(vector<vector<int>>& grid, int i, int j) {
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()) {
        return false;
    }

    if (grid[i][j]) {
        return true;
    }

    grid[i][j] = 1;

    auto a = solver(grid, i - 1, j);
    auto b = solver(grid, i + 1, j);
    auto c = solver(grid, i, j - 1);
    auto d = solver(grid, i, j + 1);

    return a && b && c && d;
}

int closedIsland(vector<vector<int>>& grid) {
    int result = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] == 0 && solver(grid, i, j)) {
                result++;
            }
        }
    }

    return result;
}

int main() {
    vector<vector<int>> grid{{1,1,1,1,1,1,1,0},
                             {1,0,0,0,0,1,1,0},
                             {1,0,1,0,1,1,1,0},
                             {1,0,0,0,0,1,0,1},
                             {1,1,1,1,1,1,1,0}};

    cout << closedIsland(grid) << endl;
    return 0;
}
